#ifndef FISH_H
#define FISH_H

#include <QString>

class Fish {
private:
    QString name;
    QString type;

public:
    Fish(const QString& n, const QString& t);

    QString getName() const;
    void setName(const QString& n);

    QString getType() const;
    void setType(const QString& t);
};

#endif // FISH_H
