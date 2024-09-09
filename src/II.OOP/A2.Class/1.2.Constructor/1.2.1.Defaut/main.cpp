// C++ program to illustrate the concept of default
// constructors
#include <iostream>
using namespace std;

class construct
{
public:
    int a, b;

    construct()
    {
        a = 10;
        b = 20;
    }
    ~construct() { cout << "\nDestructor called!"; }
};

int main()
{
    // Default constructor called automatically
    // when the object is created
    construct c;
    cout << "a: " << c.a << endl
         << "b: " << c.b;

    return 1;
}
