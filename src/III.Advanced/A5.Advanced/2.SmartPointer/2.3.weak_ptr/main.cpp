#include <iostream>
#include <memory>

class MyClass
{
public:
    std::shared_ptr<MyClass> ptr;
    ~MyClass() { std::cout << "Destructor called" << std::endl; }
};

int main()
{
    std::shared_ptr<MyClass> ptr1 = std::make_shared<MyClass>();
    std::shared_ptr<MyClass> ptr2 = std::make_shared<MyClass>();
    ptr1->ptr = ptr2; // Vòng tham chiếu
    ptr2->ptr = ptr1; // Vòng tham chiếu

    // Chuyển sang sử dụng weak_ptr để phá vỡ vòng tham chiếu
    std::shared_ptr<MyClass> ptr3 = std::make_shared<MyClass>();
    std::weak_ptr<MyClass> ptr4 = ptr3;                                // Giữ tham chiếu yếu
    std::cout << "Reference count: " << ptr3.use_count() << std::endl; // In ra: 1

    return 0;
}
