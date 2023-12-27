#ifndef WATERBODY_H
#define WATERBODY_H

#include <QString>
#include <vector>
#include "Fish.h"
#include "Plant.h"

class Waterbody {
private:
    QString name;
    QString type;
    QString location;

public:
    Waterbody(const QString& name, const QString& type, const QString& location);

    QString getName() const;
    void setName(const QString& n);

    QString getType() const;
    void setType(const QString& t);

    QString getLocation() const;
    void setLocation(const QString& loc);
};

#endif // WATERBODY_H
