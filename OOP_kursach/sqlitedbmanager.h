#ifndef DATABASE_H
#define DATABASE_H

#include "dbmanager.h"
#include "Waterbody.h"
#include "Plant.h"
#include "Fish.h"

#define DATABASE_HOST_NAME   "ExampleDataBase"
#define DATABASE_FILE_NAME   "DataBase.sqlite"

class SqliteDBManager : public DBManager {

public:
    static SqliteDBManager* getInstance();

    void connectToDataBase() override;

    QSqlDatabase getDB() override;

    bool inserIntoTable(Waterbody& waterbody);
    bool inserIntoTable(Plant& plant);
    bool inserIntoTable(Fish& fish);

private:
    QSqlDatabase db;

    static SqliteDBManager* instance;

    SqliteDBManager();

    bool openDataBase();
    bool restoreDataBase();
    void closeDataBase();
    bool createTables();
};

#endif // DATABASE_H
