#ifndef WATERBODYGUIDE_H
#define WATERBODYGUIDE_H

#include "Waterbody.h"
#include <vector>

class WaterbodyGuide {
private:
    std::vector<Waterbody> waterbodies;

public:
    void addWaterbody(const Waterbody& waterbody);
    void removeWaterbody(size_t index);
    void editWaterbody(size_t index, const Waterbody& updatedWaterbody);
    void displayAllWaterbodies() const;
};

#endif // WATERBODYGUIDE_H
