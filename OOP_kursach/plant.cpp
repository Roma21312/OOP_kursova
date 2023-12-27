#include "Plant.h"

Plant::Plant(const QString& n, const QString& t) : name(n), type(t) {}

QString Plant::getName() const {
    return name;
}

void Plant::setName(const QString& n) {
    name = n;
}

QString Plant::getType() const {
    return type;
}

void Plant::setType(const QString& t) {
    type = t;
}
