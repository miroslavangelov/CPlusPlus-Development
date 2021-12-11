#include <iostream>

void findLongestSequence(const int* arr, const int length, int& index, int& lengthMax) {
    index = 0;
    lengthMax = 1;

    for (int lengthCurrent = 1, prev = arr[0], i = 1; i < length; prev = arr[i], ++i) {
        if (prev != arr[i]) {
            lengthCurrent = 0;
        }

        if (++lengthCurrent >= lengthMax) {
            lengthMax = lengthCurrent;
            index = i - lengthCurrent + 1;
        }
    }
}

int main() {
    int length;
    std::cin >> length;
    int* array = new int[length];

    for (int i = 0; i < length; i++) {
        int element;
        std::cin >> element;
        array[i] = element;
    }

    int longestStartIndex, longestLength;
    findLongestSequence(array, length, longestStartIndex, longestLength);

    for (int i = longestStartIndex; i < longestStartIndex + longestLength; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
