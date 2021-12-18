#include <iostream>
#include <utility>
#include <vector>

class Coffee {
    std::string name;
    double price;
    double rating;

public:
    Coffee(std::string name, double price, double rating) {
        this->name = std::move(name);
        this->price = price;
        this->rating = rating;
    }

    std::string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }

    double getRaring() {
        return rating;
    }

    void setPrice(double newPrice) {
        price = newPrice;
    }
};

int main() {
    int drinksCount;
    std::cin >> drinksCount;
    std::vector<Coffee> coffeeShop;

    for (int i = 0; i < drinksCount; i++) {
        std::string drinkName;
        double price, rating;

        std::getline(std::cin >> std::ws, drinkName);
        std::cin >> price >> rating;

        if (rating < 4) {
            continue;
        }

        if (rating >= 4 && rating <= 5.99) {
            price -= price * 0.1;
        }

        Coffee coffee(drinkName, price, rating);
        coffeeShop.push_back(coffee);
    }

    if (coffeeShop.empty()) {
        std::cout << "The menu is empty" << std::endl;
    }
    for (Coffee coffee: coffeeShop) {
        std::cout << coffee.getName() << " " << coffee.getPrice() << std::endl;
    }

    return 0;
}
