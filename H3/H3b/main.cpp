#include <iostream>
using namespace std;

// Base class Animal
class Animal {
public:
    // Virtual function callOut() to be overridden in derived class
    virtual void callOut() const {
        cout << "Eläin ääntelee." << endl;
    }

    // Virtual destructor to ensure proper cleanup of derived class objects
    virtual ~Animal() {
        cout << "Animal destructor called." << endl;
    }
};

// Derived class Dog inheriting from Animal
class Dog : public Animal {
public:
    // Overridden function callOut() in Dog class
    void callOut() const override {
        cout << "Koira haukkuu!" << endl;
    }

    // Destructor for Dog class
    ~Dog() {
        cout << "Dog destructor called." << endl;
    }
};

// Main function to demonstrate polymorphism and function overriding
int main() {
    // Creating an object of Animal using polymorphism
    Animal* animal = new Dog();
    animal->callOut(); // Should call the overridden method in Dog

    // Clean up
    delete animal;

    // Creating an object of Dog directly
    Dog dog;
    dog.callOut(); // Should call the Dog method

    return 0;
}
