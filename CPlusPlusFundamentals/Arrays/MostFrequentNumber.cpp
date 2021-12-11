#include <iostream>

int main() {
    int numbersCount;
    std::cin >> numbersCount;
    int occurrences[10] = { 0 };
    int maxOccurrences = 0;

    for (int i = 0; i < numbersCount; i++) {
        int currentNumber;
        std::cin >> currentNumber;
        occurrences[currentNumber] += 1;

        if (occurrences[currentNumber] > maxOccurrences) {
            maxOccurrences = occurrences[currentNumber];
        }
    }

    for (int i = 0; i < 10; i++) {
        int occurrence = occurrences[i];
        if (maxOccurrences == occurrence) {
            std::cout << i << " ";
        }
    }

    return 0;
}
