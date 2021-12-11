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

    if (length <= 1) {
        std::cout << 0 << std::endl;
    } else {
        int smallestDifference = 2147483647;
        for (int i = 0; i < length; i++) {
            int firstNumber = array[i];

            for (int j = 0; j < length; j++) {
                if (i == j) {
                    continue;
                }

                int secondNumber = array[j];
                int result = firstNumber - secondNumber;
                result = result < 0 ? result * -1 : result;

                if (result < smallestDifference) {
                    smallestDifference = result;
                }
            }
        }
        std::cout << smallestDifference << std::endl;
    }

    return 0;
}
