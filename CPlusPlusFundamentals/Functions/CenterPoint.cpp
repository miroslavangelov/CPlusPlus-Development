#include <iostream>
#include <cmath>

double calculateDistanceToCenter(double x, double y);

int main() {
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    double firstPoint = calculateDistanceToCenter(x1, y1);
    double secondPoint = calculateDistanceToCenter(x2, y2);

    if (firstPoint <= secondPoint) {
        std::cout << "(" << x1 << ", " << y1 << ")" << std::endl;
    } else {
        std::cout << "(" << x2 << ", " << y2 << ")" << std::endl;
    }

    return 0;
}

double calculateDistanceToCenter(double x, double y) {
    return sqrt(x*x + y*y);
}
