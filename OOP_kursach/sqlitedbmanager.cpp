#include "sqlitedbmanager.h"
#include "Waterbody.h"
#include "Plant.h"
#include "Fish.h"

#include <QDate>
#include <QDebug>
#include <QFile>
#include <QObject>

bool SqliteDBManager::restoreDataBase() {
    if (this->openDataBase()) {
        if (!this->createTable()) {
            return false;
        } else {
            return true;
        }
    } else {
        qDebug() << "Не вдалось відновити базу даних";
        return false;
    }
}

bool SqliteDBManager::openDataBase() {
    /* База даних відкривається по вказаному шляху
     * та імені бази даних, якщо вона існує
     * */
    if (db.open()) {
        return true;
    } else
        return false;
}

void SqliteDBManager::closeDataBase() {
    db.close();
}

bool SqliteDBManager::createTable() {
    /* В даному випадку використовується фурмування сирого SQL-запиту
     * з наступним його виконанням.
     * */
    QSqlQuery query;
    if (!query.exec("CREATE TABLE waterbody(\
                        name TEXT,\
                        type TEXT,\
                        location TEXT\
                    )") ){
        qDebug() << "DataBase: error of create waterbody";
        qDebug() << query.lastError().text();
        return false;
    }
    if (!query.exec("CREATE TABLE fish(\
                        name_waterbody TEXT,\
                        name TEXT,\
                        type TEXT,\
                        FOREIGN KEY (name_waterbody) REFERENCES watebody(name)\
                    )") ){
        qDebug() << "DataBase: error of create fish";
        qDebug() << query.lastError().text();
        return false;
    }
    if (!query.exec("CREATE TABLE plant(\
                        name_waterbody TEXT,\
                        name TEXT,\
                        type TEXT,\
                        FOREIGN KEY (name_waterbody) REFERENCES watebody(name)\
                    )") ){
        qDebug() << "DataBase: error of create plant";
        qDebug() << query.lastError().text();
        return false;
    }else
        return true;
}

bool SqliteDBManager::inserIntoTable(Waterbody& waterbody) {
    QSqlQuery query;
    query.prepare("INSERT INTO Waterbody (name, type, location) "
                  "VALUES (:name, :type, :location)");
    query.bindValue(":name", QString::fromStdString(waterbody.getName()));
    query.bindValue(":type", QString::fromStdString(waterbody.getType()));
    query.bindValue(":location", QString::fromStdString(waterbody.getLocation()));

    if (!query.exec()) {
        qDebug() << "error insert into Waterbody";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
        return false;
    } else {
        return true;
    }
}

bool SqliteDBManager::inserIntoTable(Plant& plant) {
    QSqlQuery query;
    query.prepare("INSERT INTO Plant (name, type, waterbody_id) "
                  "VALUES (:name, :type, :waterbody_id)");
    query.bindValue(":name", QString::fromStdString(plant.getName()));
    query.bindValue(":type", QString::fromStdString(plant.getType()));
    query.bindValue(":waterbody_id", plant.getWaterbodyId());

    if (!query.exec()) {
        qDebug() << "error insert into Plant";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
        return false;
    } else {
        return true;
    }
}

bool SqliteDBManager::inserIntoTable(Fish& fish) {
    QSqlQuery query;
    query.prepare("INSERT INTO Fish (name, species, waterbody_id) "
                  "VALUES (:name, :species, :waterbody_id)");
    query.bindValue(":name", QString::fromStdString(fish.getName()));
    query.bindValue(":species", QString::fromStdString(fish.getSpecies()));
    query.bindValue(":waterbody_id", fish.getWaterbodyId());

    if (!query.exec()) {
        qDebug() << "error insert into Fish";
        qDebug() << query.lastError().text();
        qDebug() << query.lastQuery();
        return false;
    } else {
        return true;
    }
}
