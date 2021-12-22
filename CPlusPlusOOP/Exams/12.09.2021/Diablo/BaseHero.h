#ifndef DIABLO_BASEHERO_H
#define DIABLO_BASEHERO_H

#include "Structs.h"
#include "Defines.h"
#include "Hero.h"

class BaseHero : public Hero {
public:
    explicit BaseHero(VitalData vitalData, std::string const& name);

    int castSpell() override;

    void takeDamage(int damage) override;

    void regenerate() override;

    bool isDead() const override;

    void readSpellFromInput(SpellType spellType) override;

    virtual int applyAttackBonus(int damage, int forRound) const;

    virtual int applyDefenceBonus(int damage, int forRound) const;

private:
    SpellData getSpell() const;

    int _currentAttackRound{0};
    int _currentDefenceRound{0};
};

#endif //DIABLO_BASEHERO_H
