#include "Fish.h"

Fish::Fish(const QString& n, const QString& t) : name(n), type(t) {}

QString Fish::getName() const {
    return name;
}

void Fish::setName(const QString& n) {
    name = n;
}

QString Fish::getType() const {
    return type;
}

void Fish::setType(const QString& t) {
    type = t;
}
