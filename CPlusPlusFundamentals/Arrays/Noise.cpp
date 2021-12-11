#include <iostream>
#include <valarray>

int main() {
    std::string input;
    std::cin >> input;
    std::string number;

    for (char currentElement : input) {
        if (currentElement == '.') {
            break;
        }

        if (isdigit(currentElement)) {
            number += currentElement;
        }
    }

    double result = std::sqrt(std::stoi(number));
    std::cout << result << std::endl;

    return 0;
}
