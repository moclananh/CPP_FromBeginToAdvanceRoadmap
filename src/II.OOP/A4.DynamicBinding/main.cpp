#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal sound" << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Woof" << endl;
    }
};

// Function using dynamic binding
void makeSound(Animal *animal)
{
    // Dynamic binding occurs here
    animal->sound();
}

int main()
{
    Animal *animal1 = new Animal();
    Animal *animal2 = new Dog();

    makeSound(animal1); // Calls Animal's sound()
    makeSound(animal2); // Calls Dog's sound()

    delete animal1;
    delete animal2;

    return 0;
}
