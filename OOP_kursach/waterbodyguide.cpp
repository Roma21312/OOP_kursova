#include "WaterbodyGuide.h"
#include <iostream>

void WaterbodyGuide::addWaterbody(const Waterbody& waterbody) {
    waterbodies.push_back(waterbody);
}

void WaterbodyGuide::removeWaterbody(size_t index) {
    if (index < waterbodies.size()) {
        waterbodies.erase(waterbodies.begin() + index);
    }
}

void WaterbodyGuide::editWaterbody(size_t index, const Waterbody& updatedWaterbody) {
    if (index < waterbodies.size()) {
        waterbodies[index] = updatedWaterbody;
    }
}

void WaterbodyGuide::displayAllWaterbodies() const {
    for (const auto& waterbody : waterbodies) {
        waterbody.displayInfo();
    }
}
