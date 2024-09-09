#include <iostream>
#include <memory>

class MyClass
{
public:
    MyClass() { std::cout << "Constructor called" << std::endl; }
    ~MyClass() { std::cout << "Destructor called" << std::endl; }
};

int main()
{
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
    {
        std::shared_ptr<MyClass> ptr2 = ptr1;                              // Bộ đếm tham chiếu tăng lên
        std::cout << "Reference count: " << ptr1.use_count() << std::endl; // In ra: 2
    }
    // ptr2 ra khỏi scope, bộ đếm tham chiếu giảm xuống

    std::cout << "Reference count: " << ptr1.use_count() << std::endl; // In ra: 1

    return 0;
}
