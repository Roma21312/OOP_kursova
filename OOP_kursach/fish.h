#ifndef FISH_H
#define FISH_H

#include <QString>

class Fish {
public:
    QString name;
    QString type;

    Fish(const QString& n, const QString& t);
};

#endif // FISH_H
