#include <iostream>

// Lớp trừu tượng Shape
class Shape
{
public:
    // Hàm ảo thuần túy = 0;
    virtual void draw() = 0;
    virtual double area() = 0;
};

// Lớp con Rectangle kế thừa từ Shape
class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    Rectangle() {}
    void draw() override
    {
        std::cout << "Drawing a rectangle." << std::endl;
    }

    double area() override
    {
        return width * height;
    }
};

// Lớp con Circle kế thừa từ Shape
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void draw() override
    {
        std::cout << "Drawing a circle." << std::endl;
    }

    double area() override
    {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    // Tạo đối tượng của lớp con
    Shape *rectangle = new Rectangle(5.0, 3.0);
    Shape *circle = new Circle(2.0);

    // Sử dụng các hàm của đối tượng thông qua lớp cơ sở
    rectangle->draw();
    std::cout << "Area of rectangle: " << rectangle->area() << std::endl;

    circle->draw();
    std::cout << "Area of circle: " << circle->area() << std::endl;

    // Giải phóng bộ nhớ
    delete rectangle;
    delete circle;

    return 0;
}
