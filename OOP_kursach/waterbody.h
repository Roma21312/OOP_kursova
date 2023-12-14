#ifndef WATERBODY_H
#define WATERBODY_H

#include <QString>
#include <vector>
#include "Fish.h"
#include "Plant.h"

class Waterbody {
public:
    QString name;
    QString type;
    QString location;
    QPair<double, double> coordinates;
    double size;
    std::vector<Fish> fishes;
    std::vector<Plant> plants;

    Waterbody(const QString& n, const QString& t, const QString& loc,
              const QPair<double, double>& coords, double s);

    void displayInfo() const;
};

#endif // WATERBODY_H
