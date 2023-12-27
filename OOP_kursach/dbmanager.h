#ifndef DBMANAGER_H
#define DBMANAGER_H

#include "Fish.h"
#include "Plant.h"
#include "Waterbody.h"
#include <QSqlDatabase>

class DBManager {
public:
    virtual void connectToDataBase() = 0;

    virtual QSqlDatabase getDB() = 0;

    virtual bool inserIntoTable(Plant &Plant) = 0;
    virtual bool inserIntoTable(Fish &Fish) = 0;
    virtual bool inserIntoTable(Waterbody &Waterbody) = 0;
};

#endif // DBMANAGER_H
