#include <iostream>

int division(int a, int b);
int multiplication(int a, int b);
int subtraction(int a, int b);
int addition(int a, int b);

int main() {
    int a, b;
    std::cin >> a >> b;
    std::string operation;
    std::cin >> operation;

    if (operation == "*") {
        std::cout << multiplication(a, b) << std::endl;
    } else if (operation == "/") {
        if (b == 0) {
            std::cout << "Can't divide by zero." << std::endl;
        } else {
            std::cout << division(a, b) << std::endl;
        }
    } else if (operation == "-") {
        std::cout << subtraction(a, b) << std::endl;
    } else if (operation == "+") {
        std::cout << addition(a, b) << std::endl;
    }

    return 0;
}

int division(int a, int b) {
    return a / b;
}

int multiplication(int a, int b) {
    return a * b;
}

int subtraction(int a, int b) {
    return a - b;
}

int addition(int a, int b) {
    return a + b;
}
