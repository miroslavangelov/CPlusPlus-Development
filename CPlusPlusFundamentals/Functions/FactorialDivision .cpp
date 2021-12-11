#include <iostream>
#include <iomanip>

double factorial(int n) {
    double factorial = 1.00;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    double firstResult = factorial(a);
    double secondResult = factorial(b);

    std::cout <<std::setprecision(2) << std::fixed << firstResult / secondResult << std::endl;

    return 0;
}
