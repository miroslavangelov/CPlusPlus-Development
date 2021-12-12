#include <iostream>
#include <sstream>

int main() {
    std::string text, words;
    std::getline(std::cin >> std::ws, text);
    std::istringstream iss{ text };
    long sum = 0;

    while (iss) {
        int number;
        if (iss >> number) {
            sum += number;
            continue;
        }

        iss.clear();

        std::string word;
        if (iss >> word) {
            words += word + " ";
        }
    }

    std::cout << sum << std::endl;
    std::cout << words << std::endl;

    return 0;
}
