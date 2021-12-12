#include <iostream>

int main() {
    std::string expression;
    std::getline(std::cin >> std::ws, expression);

    int openBrackets = 0;

    for (char element: expression) {
        if (element == '(') {
            openBrackets++;
        } else if (element == ')') {
            openBrackets--;
        }

        if (openBrackets < 0) {
            break;
        }
    }

    std::cout << (openBrackets == 0 ? "correct" : "incorrect") << std::endl;
    return 0;
}
