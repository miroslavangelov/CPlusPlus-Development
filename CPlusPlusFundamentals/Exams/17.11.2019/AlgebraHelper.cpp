#include <iostream>
#include <sstream>
#include <utility>
#include <vector>
#include <algorithm>

class Equation {
    std::string expression;
    int result;

public:
    Equation(std::string expression, int result) {
        this->expression = std::move(expression);
        this->result = result;
    }

    std::string getExpression() {
        return expression;
    }

    std::string getResult() {
        int result;
    }

    bool operator<(const Equation& other) const {
        return this->result > other.result;
    }
};

int main() {
    int equationsCount;
    std::cin >> equationsCount;
    std::vector<Equation> equations;

    for (int i = 0; i < equationsCount; i++) {
        std::string expression;
        int firstNumber, secondNumber;
        std::string operation;
        int result = 0;

        std::getline(std::cin >> std::ws, expression);
        std::istringstream iss{ expression };
        iss >> firstNumber;
        iss >> operation;
        iss >> secondNumber;

        if (operation == "*") {
            result = firstNumber * secondNumber;
        } else if (operation == "/") {
            result = firstNumber / secondNumber;
        } else if (operation == "+") {
            result = firstNumber + secondNumber;
        } else if (operation == "-") {
            result = firstNumber - secondNumber;
        } else if (operation == "%") {
            result = firstNumber % secondNumber;
        }

        Equation equation(expression, result);
        equations.push_back(equation);
    }

    std::sort(equations.begin(), equations.end());
    for (Equation equation: equations) {
        std::cout << equation.getExpression() << std::endl;
    }

    return 0;
}
