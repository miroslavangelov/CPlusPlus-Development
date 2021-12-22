#ifndef DIABLO_BARBARIAN_H
#define DIABLO_BARBARIAN_H

#include "BaseHero.h"

class Barbarian : public BaseHero {
public:
    Barbarian() = delete;

    explicit Barbarian(VitalData vitalData) : BaseHero(vitalData, BARBARIAN_NAME) { };

    int applyDefenceBonus(int damage, int forRound) const override;
};

#endif //DIABLO_BARBARIAN_H
