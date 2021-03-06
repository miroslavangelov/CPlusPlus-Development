#include <iostream>

std::string replaceAll(std::string str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }

    return str;
}

int main() {
    std::string text, oldWord, newWord;
    std::getline(std::cin >> std::ws, text);
    std::getline(std::cin >> std::ws, oldWord);
    std::getline(std::cin >> std::ws, newWord);

    text = replaceAll(text, oldWord, newWord);
    std::cout << text << std::endl;

    return 0;
}
