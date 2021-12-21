#ifndef SUMMERFESTIVAL_FOOD_H
#define SUMMERFESTIVAL_FOOD_H

#include <vector>
#include <string>
#include "Order.h"

class Food {
    std::vector<Order> orders{};

public:
    Food();

    void cook(std::string type, std::string size, double price);

    void sell(int index);

    void copy(int indexFrom, int indexTo);
};

#endif //SUMMERFESTIVAL_FOOD_H
