#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main() {
    int rows, cols;
    std::cin >> rows >> cols;
    std::vector<std::vector<int>> rectangle(rows, std::vector<int>(cols));;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int currentNumber;
            std::cin >> currentNumber;
            rectangle[i][j] = currentNumber;
        }
    }

    int squareSize, targetSum;
    std::cin >> squareSize >> targetSum;
    std::vector<int> averages;

    for (int startRow = 0; startRow <= rows - squareSize; startRow++) {
        for (int startCol = 0; startCol <= cols - squareSize; startCol++) {
            int sum = 0;

            for (int row = startRow; row < startRow + squareSize; row++) {
                for (int col = startCol; col < startCol + squareSize; col++) {
                    sum += rectangle[row][col];
                }
            }

            if (sum >= targetSum) {
                int average = sum / (squareSize * squareSize);
                averages.push_back(average);
            }
        }
    }

    sort(averages.begin(), averages.end());
    for (int average : averages) {
        std::cout << std::to_string(average)  + " ";
    }

    return 0;
}
