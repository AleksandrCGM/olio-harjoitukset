#include <iostream>
#include <vector>

// Car-luokka
class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    // Konstruktori
    Car(const std::string &b, const std::string &m, int y) : brand(b), model(m), yearModel(y) {}

    void printData() const {
        std::cout << "Brand: " << brand << "\n";
        std::cout << "Model: " << model << "\n";
        std::cout << "Year: " << yearModel << "\n";
    }
};

int main() {
    // Luo vektori carList
    std::vector<Car> carList;

    // Luo kolme Car-luokan oliota ja lisää ne listaan
    carList.emplace_back("Toyota", "Corolla", 2020);
    carList.emplace_back("Honda", "Civic", 2018);
    carList.emplace_back("Ford", "Mustang", 2021);

    // Tulosta listan toisen alkion tiedot
    std::cout << "Toisen alkion tiedot:\n";
    carList[1].printData();

    std::cout << "\nKaikkien autojen tiedot:\n";

    // Tulosta kaikkien autojen tiedot for-silmukalla
    for (const auto &car : carList) {
        car.printData();
        std::cout << "\n";
    }

    return 0;
}
