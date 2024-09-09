// C++ program to demonstrate
// Function Derived Type

#include <iostream>
using namespace std;

// sum here is a func
int sum(int x, int y)
{
    return x + y;
}

// main is the default function derived type
int main()
{
    int s = sum(5, 6);

    cout << "sum is " << s;
    return 0;
}
