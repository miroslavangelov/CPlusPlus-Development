#include <iostream>
#include "InputParser.h"

Input readInput() {
    Input input{};
    std::cin >> input.line >> input.letter >> input.repetitions;

    return input;
}