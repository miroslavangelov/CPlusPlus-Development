#ifndef MAGICKINGDOM_VILLAGERHELPER_H
#define MAGICKINGDOM_VILLAGERHELPER_H

#include "Struct.h"
#include <ostream>

bool operator<(const Villager& first, const Villager& second);

bool operator>(const Villager& first, const Villager& second);

std::ostream& operator<<(std::ostream& os, const Villager& villager);

#endif //MAGICKINGDOM_VILLAGERHELPER_H
