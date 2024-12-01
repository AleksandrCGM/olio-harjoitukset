#include <iostream>
#include <string>
using namespace std;

// Engine class
class Engine {
private:
    int horsepower;
    double displacement;

public:
    // Default constructor
    Engine() : horsepower(0), displacement(0.0) {}

    // Constructor with parameters
    Engine(int hp, double disp) : horsepower(hp), displacement(disp) {}

    // Getters
    int getHorsepower() const { return horsepower; }
    double getDisplacement() const { return displacement; }

    // Setters
    void setHorsepower(int hp) { horsepower = hp; }
    void setDisplacement(double disp) { displacement = disp; }
};

// Wheel class
class Wheel {
private:
    int size;
    string type;

public:
    // Default constructor
    Wheel() : size(0), type("") {}

    // Constructor with parameters
    Wheel(int sz, string tp) : size(sz), type(tp) {}

    // Getters
    int getSize() const { return size; }
    string getType() const { return type; }

    // Setters
    void setSize(int sz) { size = sz; }
    void setType(string tp) { type = tp; }
};

// Car class
class Car {
private:
    Engine objEngine; // Composition: Car has an Engine
    Wheel objWheel1;  // Composition: Car has four Wheels
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;

public:
    // Default constructor
    Car() : model(""), brand("") {}

    // Constructor with parameters for model and brand
    Car(string mdl, string brnd) : model(mdl), brand(brnd) {}

    // Set engine properties
    void setEngine(int hp, double disp) {
        objEngine.setHorsepower(hp);
        objEngine.setDisplacement(disp);
    }

    // Set wheel properties for all wheels
    void setWheels(int sz, string tp) {
        objWheel1.setSize(sz);
        objWheel1.setType(tp);
        objWheel2.setSize(sz);
        objWheel2.setType(tp);
        objWheel3.setSize(sz);
        objWheel3.setType(tp);
        objWheel4.setSize(sz);
        objWheel4.setType(tp);
    }

    // Setters for model and brand
    void setModel(string mdl) { model = mdl; }
    void setBrand(string brnd) { brand = brnd; }

    // Getters for model and brand
    string getModel() const { return model; }
    string getBrand() const { return brand; }

    // Print details of the car
    void printDetails() const {
        cout << "Auto: " << model << " " << brand << endl;
        cout << "Moottori: " << objEngine.getHorsepower() << " HP, " << objEngine.getDisplacement() << " L" << endl;
        cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, " << objWheel1.getType() << endl;
        cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, " << objWheel2.getType() << endl;
        cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, " << objWheel3.getType() << endl;
        cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, " << objWheel4.getType() << endl;
    }
};

// Main function
int main() {
    // Create a Car object
    Car myCar("Corolla", "Toyota");

    // Set engine properties
    myCar.setEngine(150, 2.0);

    // Set wheel properties
    myCar.setWheels(17, "kesarengas");

    // Print car details
    myCar.printDetails();

    return 0;
}
