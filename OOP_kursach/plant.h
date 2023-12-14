#ifndef PLANT_H
#define PLANT_H

#include <QString>

class Plant {
public:
    QString name;
    QString type;

    Plant(const QString& n, const QString& t);
};

#endif // PLANT_H
