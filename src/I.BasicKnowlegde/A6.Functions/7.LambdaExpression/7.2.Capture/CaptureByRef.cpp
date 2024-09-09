#include <iostream>

int main()
{
    int x = 10;
    auto printValue = [&x]()
    {
        std::cout << "Value: " << x << std::endl;
    };

    printValue(); // Output: Value: 10

    x = 20;
    printValue(); // Output: Value: 20 vì x được capture by reference

    return 0;
}
