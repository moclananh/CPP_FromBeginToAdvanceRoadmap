#include <iostream>

int main()
{
    int x = 10;
    int *a = &x;  // a là con trỏ trỏ tới x
    int **b = &a; // b là con trỏ trỏ tới con trỏ a

    std::cout << "Value of x: " << x << std::endl;                      // Output: 10
    std::cout << "Address of x: " << &x << std::endl;                   // Output: Địa chỉ của x
    std::cout << "Value of a: " << a << std::endl;                      // Output: Địa chỉ của x (giống với dòng trên)
    std::cout << "Value at address a: " << *a << std::endl;             // Output: 10
    std::cout << "Address of a: " << &a << std::endl;                   // Output: Địa chỉ của a
    std::cout << "Value of b: " << b << std::endl;                      // Output: Địa chỉ của a (giống với dòng trên)
    std::cout << "Value at address b: " << *b << std::endl;             // Output: Địa chỉ của x (giống với giá trị của a)
    std::cout << "Value at address at address b: " << **b << std::endl; // Output: 10
    std::cout << "Address of b: " << &b << std::endl;

    return 0;
}
