#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound() const
    {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound() const override
    {
        cout << "Woof" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() const override
    {
        cout << "Meow" << endl;
    }
};

void playSound(const Animal &animal)
{
    animal.makeSound();
}

int main()
{
    Dog dog;
    Cat cat;

    playSound(dog); // Outputs: Woof
    playSound(cat); // Outputs: Meow

    return 0;
}
