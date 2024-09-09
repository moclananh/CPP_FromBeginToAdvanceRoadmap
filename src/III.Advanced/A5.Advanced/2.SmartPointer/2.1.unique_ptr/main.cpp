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
    std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>();
    // std::unique_ptr<MyClass> ptr2 = ptr1; // Lỗi: không thể copy
    std::unique_ptr<MyClass> ptr3 = std::move(ptr1); // Được phép di chuyển

    return 0;
}
