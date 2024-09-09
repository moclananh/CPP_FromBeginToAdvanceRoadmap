#include <iostream>
using namespace std;
int main()
{
    float f = 3.5;

    // using cast operator
    int b = static_cast<int>(f);

    cout << b;
}

/*Conversion using Cast operator: A Cast operator is an unary operator
which forces one data type to be converted into another data type.
C++ supports four types of casting:
Static Cast
Dynamic Cast
Const Cast
Reinterpret Cast*/