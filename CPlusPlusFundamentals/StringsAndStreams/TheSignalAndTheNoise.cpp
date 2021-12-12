#include <iostream>

int main() {
    std::string text;
    std::getline(std::cin >> std::ws, text);
    int max = 0;
    int currentNumber = 0;

    for (char element: text) {
        if (std::isdigit(element)) {
            currentNumber *= 10;
            currentNumber += element - '0';

            if (currentNumber > max) {
                max = currentNumber;
            }

            continue;
        }

        if (std::isblank(element)) {
            currentNumber = 0;
        }
    }

    std::cout << max << std::endl;

    return 0;
}
