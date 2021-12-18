#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

int main() {
    std::string text;
    int sentencesCount;
    std::cin >> sentencesCount;

    for (int i = 0; i < sentencesCount; i++) {
        std::string currentRow;
        std::getline(std::cin >> std::ws, currentRow);
        text += currentRow + " ";
    }

    std::istringstream iss{ text };
    std::vector<std::string> sentences;

    while (iss) {
        std::string word;
        iss >> word;

        if (word == ".") {
            sentences.push_back(word);
            for (int i = 0; i < sentences.size(); i++) {
                std::cout << sentences[i] + " ";
            }
            sentences.clear();
            continue;
        }

        if (std::find(sentences.begin(), sentences.end(), word) != sentences.end()) {
            continue;
        } else {
            sentences.push_back(word);
        }
    }

    if (!sentences.empty()) {
        for (int i = 0; i < sentences.size(); i++) {
            std::cout << sentences[i] + " ";
        }
    }

    return 0;
}
