// C++ program to illustrate the dynamic_cast
#include <iostream>
using namespace std;

// Base Class
class Animal
{
public:
    virtual void speak() const
    {
        cout << "Animal speaks." << endl;
    }
};

// Derived Class
class Dog : public Animal
{
public:
    void speak() const override
    {
        cout << "Dog barks." << endl;
    }
};

// Derived Class
class Cat : public Animal
{
public:
    void speak() const override
    {
        cout << "Cat meows." << endl;
    }
};

int main()
{
    // base class pointer to derived class object
    Animal *animalPtr = new Dog();

    // downcasting
    Dog *dogPtr = dynamic_cast<Dog *>(animalPtr);

    // checking if the typecasting is successfull
    if (dogPtr)
    {
        dogPtr->speak();
    }
    else
    {
        cout << "Failed to cast to Dog." << endl;
    }

    // typecasting to other dervied class
    Cat *catPtr = dynamic_cast<Cat *>(animalPtr);
    if (catPtr)
    {
        catPtr->speak();
    }
    else
    {
        cout << "Failed to cast to Cat." << endl;
    }

    delete animalPtr;
    return 0;
}