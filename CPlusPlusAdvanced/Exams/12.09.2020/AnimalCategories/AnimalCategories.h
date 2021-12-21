#ifndef ANIMALCATEGORIES_ANIMALCATEGORIES_H
#define ANIMALCATEGORIES_ANIMALCATEGORIES_H
#include <unordered_map>
#include <string>

namespace categories {
    enum AnimalCategories {
        AnimalCategoryBegin = 1,
        Cat = 1,
        Dog = 2,
        Bunny = 3,
        AnimalCategoryEnd
    };

    const std::string& categoryIdToName(int id) {
        static const std::unordered_map<int, std::string> idToName{
                { 1, "Cat" },
                { 2, "Dog" },
                { 3, "Bunny" },
        };

        return idToName.at(id);
    }
}

#endif //ANIMALCATEGORIES_ANIMALCATEGORIES_H
