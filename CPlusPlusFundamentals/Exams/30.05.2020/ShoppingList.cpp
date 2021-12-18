#include <iostream>
#include <vector>
#include <algorithm>

class Item {
    std::string name;
    double finalPrice;

public:
    Item(std::string name, double finalPrice) {
        this->name = name;
        this->finalPrice = finalPrice;
    }

public:
    std::string getName() {
        return name;
    }

public:
    double getFinalPrice() {
        return finalPrice;
    }

    bool operator<(const Item& other) const {
        return this->finalPrice > other.finalPrice;
    }
};

int main() {
    int itemsCount;
    std::cin >> itemsCount;
    std::vector<Item> items;
    double totalSum = 0;

    for (int i = 0; i < itemsCount; i++) {
        std::string itemName;
        double price, finalPrice;
        int count;

        std::getline(std::cin >> std::ws, itemName);
        std::cin >> price;
        std::cin >> count;
        finalPrice = price * count;
        Item item(itemName, finalPrice);
        items.push_back(item);
        totalSum += finalPrice;
    }

    std::sort(items.begin(), items.end());
    std::cout << "The total sum is: " << totalSum << " lv." << std::endl;
    for (Item item: items) {
        std::cout << item.getName() << " " << item.getFinalPrice() << " " << std::endl;
    }

    return 0;
}
