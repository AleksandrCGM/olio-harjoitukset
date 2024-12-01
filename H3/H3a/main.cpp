#include <iostream>
#include <string>
using namespace std;

// Base class Chef
class Chef {
protected:
    string name;

public:
    // Constructor for Chef
    Chef(string chefName) : name(chefName) {
        cout << "Chef " << name << " konstruktori" << endl;
    }

    // Destructor for Chef
    ~Chef() {
        cout << "Chef " << name << " destruktori" << endl;
    }

    // Method to make salad
    void makeSalad() {
        cout << "Chef " << name << " makes salad" << endl;
    }

    // Method to make soup
    void makeSoup() {
        cout << "Chef " << name << " makes soup" << endl;
    }
};

// Derived class ItalianChef inheriting from Chef
class ItalianChef : public Chef {
public:
    // Constructor for ItalianChef
    ItalianChef(string chefName) : Chef(chefName) {
        cout << "ItalianChef " << name << " konstruktori" << endl;
    }

    // Destructor for ItalianChef
    ~ItalianChef() {
        cout << "ItalianChef " << name << " destruktori" << endl;
    }

    // Method to make pasta
    void makePasta() {
        cout << "ItalianChef " << name << " makes pasta" << endl;
    }

    // Method to get chef's name
    string getName() {
        return name;
    }
};

// Main function
int main() {
    // Create a Chef object automatically (stack memory)
    {
        Chef chef("Gordon Ramsay");
        chef.makeSalad();
        chef.makeSoup();
    } // Chef object is destroyed here

    // Create an ItalianChef object automatically (stack memory)
    {
        ItalianChef italianChef("Anthony Bourdain");
        italianChef.makeSalad();
        italianChef.makeSoup();
        italianChef.makePasta();
        cout << "The name of the Italian Chef is " << italianChef.getName() << endl;
    } // ItalianChef and base Chef objects are destroyed here

    return 0;
}
