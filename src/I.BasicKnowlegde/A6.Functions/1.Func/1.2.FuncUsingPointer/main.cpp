// C++ Program to demonstrate working of
// function using pointers
#include <iostream>
using namespace std;

void fun(int *ptr)
{
    *ptr = 30;
}

int main()
{
    int x = 20;
    fun(&x);
    cout << "x = " << x; // x = 30

    return 0;
}
