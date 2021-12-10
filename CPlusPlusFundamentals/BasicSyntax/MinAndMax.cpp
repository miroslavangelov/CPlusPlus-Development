#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int min, max;
    std::cin >> min;
    max = min;

    for (int i = 1; i < n; i++) {
        int currentNumber;
        std::cin >> currentNumber;

        if (currentNumber < min) {
            min = currentNumber;
        }

        if (currentNumber > max) {
            max = currentNumber;
        }
    }

    std::cout << min << " " << max << std::endl;
    return 0;
}
