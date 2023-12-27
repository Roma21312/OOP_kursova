#ifndef PLANT_H
#define PLANT_H

#include <QString>

class Plant {
private:
    QString name;
    QString type;

public:
    Plant(const QString& n, const QString& t);

    QString getName() const;
    void setName(const QString& n);

    QString getType() const;
    void setType(const QString& t);
};

#endif // PLANT_H
