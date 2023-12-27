#include "Waterbody.h"
#include <iostream>

Waterbody::Waterbody(const QString& n, const QString& t, const QString& loc)
    : name(n), type(t), location(loc){}

QString Waterbody::getName() const {
    return name;
}

void Waterbody::setName(const QString& n) {
    name = n;
}

QString Waterbody::getType() const {
    return type;
}

void Waterbody::setType(const QString& t) {
    type = t;
}

QString Waterbody::getLocation() const {
    return location;
}

void Waterbody::setLocation(const QString& loc) {
    location = loc;
}
