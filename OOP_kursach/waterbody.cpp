#include "Waterbody.h"
#include <iostream>

Waterbody::Waterbody(const QString& n, const QString& t, const QString& loc,
                     const QPair<double, double>& coords, double s)
    : name(n), type(t), location(loc), coordinates(coords), size(s) {}

void Waterbody::displayInfo() const {
    std::cout << "Назва: " << name.toStdString() << std::endl;
            std::cout << "Тип: " << type.toStdString() << std::endl;
                     std::cout << "Розташування: " << location.toStdString() << std::endl;
        std::cout << "Координати: (" << coordinates.first << ", " << coordinates.second << ")" << std::endl;
            std::cout << "Розмір: " << size << " гектарів" << std::endl;

            std::cout << "Риби: ";
    for (const auto& fish : fishes) {
        std::cout << fish.name.toStdString() << " ";
    }
    std::cout << std::endl;

    std::cout << "Рослини: ";
    for (const auto& plant : plants) {
        std::cout << plant.name.toStdString() << " ";
    }
    std::cout << std::endl;

    std::cout << "-----------------------" << std::endl;
}
