#include <iostream>
using namespace std;

// Lớp cơ sở
class Base
{
public:
    // Hàm ảo
    virtual void show()
    {
        cout << "Base class show function" << endl;
    }

    // Hàm không ảo
    void display()
    {
        cout << "Base class display function" << endl;
    }
};

// Lớp dẫn xuất
class Derived : public Base
{
public:
    // Định nghĩa lại hàm ảo
    void show() override
    {
        cout << "Derived class show function" << endl;
    }

    // Định nghĩa lại hàm không ảo
    void display()
    {
        cout << "Derived class display function" << endl;
    }
};

int main()
{
    Base *basePtr;
    Derived derivedObj;

    // Gán địa chỉ của đối tượng Derived cho con trỏ Base
    basePtr = &derivedObj;

    // Gọi hàm ảo (sẽ gọi phiên bản của lớp dẫn xuất)
    basePtr->show(); // Output: Derived class show function

    // Gọi hàm không ảo (sẽ gọi phiên bản của lớp cơ sở)
    basePtr->display(); // Output: Base class display function

    return 0;
}
