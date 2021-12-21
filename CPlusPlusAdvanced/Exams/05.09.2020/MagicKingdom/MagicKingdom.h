#ifndef MAGICKINGDOM_MAGICKINGDOM_H
#define MAGICKINGDOM_MAGICKINGDOM_H

#include <vector>
#include "Struct.h"

class MagicKingdom {
    std::vector<Villager> antiMages{};
    std::vector<Villager> commoners{};
    std::vector<Villager> mages{};

public:
    void printAll();

    friend MagicKingdom& operator<<(MagicKingdom&  magicKingdom, const Villager& villager);
};

#endif //MAGICKINGDOM_MAGICKINGDOM_H
