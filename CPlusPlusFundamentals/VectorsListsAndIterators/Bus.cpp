#include <iostream>
#include <vector>

int convertToMinutes(const int time) {
    return (time / 100) * 60 + (time % 100);
}

int main() {
    int busesCount;
    std::cin >> busesCount;
    std::vector<int> busses;

    for (int i = 0; i < busesCount; i++) {
        int currentTime;
        std::cin >> currentTime;
        currentTime = convertToMinutes(currentTime);
        busses.push_back(currentTime);
    }

    int trainDepartureTime;
    std::cin >> trainDepartureTime;
    trainDepartureTime = convertToMinutes(trainDepartureTime);
    int bestTimeArrival = 2147483647;
    int bestIndex;

    for (int i = 0; i < busesCount; i++) {
        int currentTime = trainDepartureTime - busses[i];

        if (currentTime >= 0 && currentTime < bestTimeArrival){
            bestTimeArrival = currentTime;
            bestIndex = i;
        }
    }

    std::cout << bestIndex + 1 << std::endl;

    return 0;
}
