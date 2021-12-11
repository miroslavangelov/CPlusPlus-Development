#include <iostream>

int main() {
    int length;
    std::cin >> length;
    int* array = new int[length];

    for (int i = 0; i < length; i++) {
        int currentNumber;
        std::cin >> currentNumber;
        array[i] = currentNumber;
    }

    for (int i = 0; i < length; i++) {
        int firstNumber = array[i];

        for (int j = 0; j < length; j++) {
            int secondNumber = array[j];
            std::cout << firstNumber * secondNumber << " ";
        }
    }

    return 0;
}
