#include <iostream>

int main() {
    std::string text;
    std::getline(std::cin >> std::ws, text);
    bool isNewWord = true;

    for (char& letter: text) {
        if (std::isalpha(letter)) {
            if (isNewWord) {
                letter = std::toupper(letter);
                isNewWord = false;
            }
        } else {
            isNewWord = true;
        }
    }

    std::cout << text << std::endl;
    return 0;
}
