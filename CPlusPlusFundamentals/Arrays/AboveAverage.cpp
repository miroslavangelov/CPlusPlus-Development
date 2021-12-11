#include <iostream>

int main() {
    int length;
    std::cin >> length;
    int* array = new int[length];
    int sum = 0;

    for (int i = 0; i < length; i++) {
        int number;
        std::cin >> number;
        array[i] = number;
        sum += number;
    }

    double average = sum / length;

    for (int i = 0; i < length; i++) {
        int currentNumber = array[i];

        if (currentNumber >= average) {
            std::cout << currentNumber << " ";
        }
    }


    return 0;
}
