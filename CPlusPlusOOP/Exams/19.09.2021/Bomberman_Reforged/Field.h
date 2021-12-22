#ifndef BOMBERMAN_REFORGED_FIELD_H
#define BOMBERMAN_REFORGED_FIELD_H

#include "Defines.h"

class Field {

public:
    FieldData getFieldData() const;

    void populateField(FieldData const& fieldData);

private:
    FieldData _fieldData;
};

#endif //BOMBERMAN_REFORGED_FIELD_H
