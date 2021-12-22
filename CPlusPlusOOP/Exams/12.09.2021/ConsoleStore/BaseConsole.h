#ifndef CONSOLESTORE_BASECONSOLE_H
#define CONSOLESTORE_BASECONSOLE_H

#include "Console.h"
#include "Defines.h"

class BaseConsole : public Console {
public:
    BaseConsole() = delete;

    BaseConsole(int price, int quality);

    virtual ~BaseConsole() = default;

    void printToConsole() const;

    virtual ConsoleType getConsoleType() const = 0;

    virtual std::string getDetailsPrefix() const = 0;
};

#endif //CONSOLESTORE_BASECONSOLE_H
