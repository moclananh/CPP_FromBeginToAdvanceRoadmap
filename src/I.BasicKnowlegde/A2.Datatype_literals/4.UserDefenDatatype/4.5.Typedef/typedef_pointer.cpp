#include <iostream>

// typedef int *IntPointer;

// int main()
// {
//     int value = 10;
//     IntPointer p = &value; // IntPointer thực chất là int*
//     std::cout << *p << std::endl;
//     return 0;
// }

// ver 2
using IntPointer = int *;

int main()
{
    int value = 10;
    IntPointer p = &value;
    std::cout << *p << std::endl;
    return 0;
}
