#include <iostream>

using FunctionPointer = void (*)(int);

void myFunction(int a)
{
    std::cout << "Value: " << a << std::endl;
}

int main()
{
    FunctionPointer fptr = myFunction;
    fptr(10);
    return 0;
}
