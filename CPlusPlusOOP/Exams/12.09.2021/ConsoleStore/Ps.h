#ifndef CONSOLESTORE_PS_H
#define CONSOLESTORE_PS_H

#include "BaseConsole.h"

class Ps : public BaseConsole {
public:
    Ps() = delete;

    Ps(int generation, int price, int quality);

    ConsoleType getConsoleType() const override;

    std::string getDetailsPrefix() const override;

private:
    const int _generation;
};

#endif //CONSOLESTORE_PS_H
