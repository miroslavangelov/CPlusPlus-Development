#include <iostream>
#include <vector>

int main() {
    int pipesCount;
    std::cin >> pipesCount;
    std::vector<int> pipesOld;
    std::vector<int> pipesNew;

    for (int i = 0; i < pipesCount; i++) {
        int currentPipe;
        std::cin >> currentPipe;
        pipesOld.push_back(currentPipe);
    }
    for (int i = 0; i < pipesCount; i++) {
        int currentPipe;
        std::cin >> currentPipe;
        pipesNew.push_back(currentPipe);
    }
    for (int i = 0; i < pipesCount; i++) {
        int yearsLeft = pipesNew[i] / (pipesNew[i] - pipesOld[i]);
        std::cout << yearsLeft << " ";
    }

    return 0;
}
