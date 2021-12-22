#ifndef CONSOLESTORE_XBOX_H
#define CONSOLESTORE_XBOX_H

#include <string>
#include "Defines.h"
#include "BaseConsole.h"

class Xbox : public BaseConsole {

public:
    Xbox() = delete;

    Xbox(int price, int quality);

    ConsoleType getConsoleType() const override;

    std::string getDetailsPrefix() const override;
};

#endif //CONSOLESTORE_XBOX_H
