#ifndef BOMBERMAN_REFORGED_BOMBERMAN_H
#define BOMBERMAN_REFORGED_BOMBERMAN_H

#include "Defines.h"

class BomberMan {

public:
    void bombPowerUp();

    int getBombPower() const;

    void bombPowerDown();

    int placeBomb(FieldData const& fieldData, int bombRow, int bombCol);

private:
    int _bombPower{0};
    std::vector<std::vector<bool>> _damagedFields{ };
};

#endif //BOMBERMAN_REFORGED_BOMBERMAN_H
