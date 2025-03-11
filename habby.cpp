#include <iostream>
using namespace std;

// A simple class
class Animal {
public:
    // Constructor
    Animal(string n) : name(n) {}

    // A method to print the name
    void printName() {
        cout << "Animal name: " << name << endl;
    }

private:
    string name;
};

int main() {
    // Creating an object of the class
    Animal myAnimal("Lion");

    // Calling the method
    myAnimal.printName();

    return 0;
}