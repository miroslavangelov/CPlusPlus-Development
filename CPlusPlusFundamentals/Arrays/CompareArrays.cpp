#include <iostream>

void readArray(int*& array, int& length) {
    std::cin >> length;
    array = new int[length];

    for (int i = 0; i < length; i++) {
        int number;
        std::cin >> number;
        array[i] = number;
    }
}

bool areEqual(const int* firstArray, int firstLength, const int* secondArray, int secondLength) {
    if (firstLength == secondLength) {
        for (int i = 0; i < firstLength; i++) {
            int firstArrayElement = firstArray[i];
            int secondArrayElement = secondArray[i];

            if (firstArrayElement != secondArrayElement) {
                return false;
            }
        }
    } else {
        return false;
    }

    return true;
}

int main() {
    int firstLength, secondLength;
    int* firstArray;
    int* secondArray;
    readArray(firstArray, firstLength);
    readArray(secondArray, secondLength);

    std::cout << (areEqual(firstArray, firstLength, secondArray, secondLength) ? "equal" : "not equal") << std::endl;

    return 0;
}
