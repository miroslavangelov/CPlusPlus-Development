#include <iostream>

int main() {
    std::string text;
    std::getline(std::cin >> std::ws, text);
    std::string maxNoise;
    std::string currentNoise;

    for (char element: text) {
        if (std::isdigit(element)) {
            continue;
        }

        if (std::isblank(element)) {
            currentNoise.clear();
            continue;
        }

        currentNoise += element;

        if (currentNoise.length() > maxNoise.length() ||
                (currentNoise.length() == maxNoise.length() && currentNoise < maxNoise)) {
            maxNoise = currentNoise;
        }
    }

    std::cout << (maxNoise.empty() ? "no noise" : maxNoise) << std::endl;

    return 0;
}
