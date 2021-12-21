#ifndef DISCOVERIES_SCIENTIFICFIELD_H
#define DISCOVERIES_SCIENTIFICFIELD_H

#include "Discovery.h"
#include <unordered_map>
#include <vector>
#include <ostream>

class ScientificField {
    std::unordered_map<std::string, std::vector<Discovery>> discoveriesByField;

public:
    ScientificField();

    void print();

    friend ScientificField& operator<<(ScientificField& scientificField, const Discovery& discovery);
};

#endif //DISCOVERIES_SCIENTIFICFIELD_H
