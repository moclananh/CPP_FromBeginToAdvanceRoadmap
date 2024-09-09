#include <iostream>
#include <string>

// Base class
class Person
{
protected:
    std::string name;
    int age;

public:
    Person(const std::string &n, int a)
        : name(n), age(a) {}

    void display() const
    {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

// Derived class inheriting publicly from Person
class Student : public Person
{
private:
    int studentID;

public:
    Student(const std::string &n, int a, int id)
        : Person(n, a), studentID(id) {}

    void displayStudent() const
    {
        display(); // Accessing base class member function
        std::cout << "Student ID: " << studentID << std::endl;
    }
};

int main()
{
    // Create an object of the derived class
    Student student1("John Doe", 20, 12345);

    // Access base class member function through derived class object
    student1.displayStudent();

    return 0;
}
