#include <iostream>

int sumOfEvenDigits(int n) {
    int r, sum = 0;

    while (n > 0) {
        r = n % 10;
        n = n / 10;

        if (r % 2 == 0) {
            sum = sum + r;
        }
    }

    return sum;
}

int sumOfOddDigits(int n) {
    int r, sum = 0;

    while (n > 0) {
        r = n % 10;
        n = n / 10;

        if (r % 2 != 0) {
            sum = sum + r;
        }
    }

    return sum;
}

int main() {
    int number;
    std::cin >> number;

    if (number < 0) {
        number *= -1;
    }

    int oddSum = sumOfOddDigits(number);
    int evenSum = sumOfEvenDigits(number);

    std::cout << oddSum * evenSum << std::endl;

    return 0;
}
