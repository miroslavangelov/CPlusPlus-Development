#ifndef DIABLO_BATTLEFIELD_H
#define DIABLO_BATTLEFIELD_H

#include <vector>
#include <memory>
#include "Hero.h"

class BattleField {
public:
    void createHeroes();

    void createSpells();

    void startBattle();

private:
    std::vector<std::unique_ptr<Hero>> _heroes{ };

    void printWinner(std::unique_ptr<Hero> const& hero);
};

#endif //DIABLO_BATTLEFIELD_H
