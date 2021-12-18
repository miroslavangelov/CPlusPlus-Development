#include <iostream>

int main() {
    int matrixSize;
    std::cin >> matrixSize;
    int sum = 0;

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            int number;
            std::cin >>number;

            if (number % 2 != 0 && i + j != matrixSize - 1 && i != j) {
                sum += number;
            }
        }
    }

    std::cout << "The sum is: " << sum;

    return 0;
}
