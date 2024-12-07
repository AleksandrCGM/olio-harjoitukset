#include <iostream>
using namespace std;

int main() {
    // Step 1: Create two variables a and b
    int a = 5;
    int b = 10;

    // Step 2: Print the values and addresses of a and b
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja osoite on: " << &b << endl;

    // Step 3: Create a pointer myPointer and assign it to the address of a
    int* myPointer = &a;
    cout << "Pointerin osoittaman osoite on: " << myPointer << endl;
    cout << "Pointerin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    // Step 4: Assign the pointer to the address of b
    myPointer = &b;
    cout << "Pointerin osoittaman osoite on: " << myPointer << endl;
    cout << "Pointerin osoittaman muistipaikan arvo on: " << *myPointer << endl;

    // Step 5: Create a reference refA and assign it to a
    int& refA = a;
    cout << "refA osoittaa osoitteeseen on: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    // Step 6: Try changing refA to point to b (not possible)

    return 0;
}
