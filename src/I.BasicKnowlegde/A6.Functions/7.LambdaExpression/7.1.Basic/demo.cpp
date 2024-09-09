#include <iostream>

int main()
{
    auto sayHello = []()
    {
        std::cout << "Hello, world!" << std::endl;
    };

    sayHello(); // Gọi lambda

    return 0;
}
