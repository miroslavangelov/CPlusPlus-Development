#include <iostream>
#include <vector>

int main() {
    int linesCount;
    std::cin >> linesCount;
    std::vector<std::string> lines;

    for (int i = 0; i < linesCount; i++) {
        std::string currentLine;
        std::getline(std::cin >> std::ws, currentLine);
        lines.push_back(currentLine);
    }
    std::string number;
    std::getline(std::cin >> std::ws, number);

    for (std::string line: lines) {
        int eachSymbolLength = line.length() / 10;
        std::string result;

        for (char i : number) {
            int currentIndex = i - '0';
            for (int j = 0; j < eachSymbolLength; j++) {
                result += line[(currentIndex * eachSymbolLength) + j];
            }
        }
        std::cout << result << std::endl;
    }

    return 0;
}
