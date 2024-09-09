#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    // Virtual function to be overridden
    virtual void draw() const
    {
        cout << "Drawing a shape" << endl;
    }

    // Virtual destructor for proper cleanup
    virtual ~Shape() {}
};

// Derived class inheriting from Shape
class Circle : public Shape
{
public:
    // Override the draw method
    void draw() const override
    {
        cout << "Drawing a circle" << endl;
    }
};

// Another derived class
class Rectangle : public Shape
{
public:
    // Override the draw method
    void draw() const override
    {
        cout << "Drawing a rectangle" << endl;
    }
};

void render(const Shape &shape)
{
    shape.draw(); // Calls the overridden method based on the actual object type
}

int main()
{
    Circle circle;
    Rectangle rectangle;

    render(circle);    // Outputs: Drawing a circle
    render(rectangle); // Outputs: Drawing a rectangle

    return 0;
}
