#include "VillagerHelper.h"
#include <ostream>

bool operator<(const Villager& first, const Villager& second) {
    return first.power < second.power;
}

bool operator>(const Villager& first, const Villager& second) {
    return first.power > second.power;
}

std::ostream& operator<<(std::ostream& os, const Villager& villager) {
    return os << villager.name << " - " << villager.magicItem;
}
