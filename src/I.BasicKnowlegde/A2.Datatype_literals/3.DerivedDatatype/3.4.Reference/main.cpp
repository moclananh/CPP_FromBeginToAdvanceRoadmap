// C++ program to illustrate
// Reference Derived Type

#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    // Reference Derived Type
    // ref is a reference to x.
    int &ref = x;

    // Value of x is now changed to 20
    ref = 20;
    cout << "x = " << x << endl;

    // Value of x is now changed to 30
    x = 30;
    cout << "ref = " << ref << endl;

    return 0;
}
