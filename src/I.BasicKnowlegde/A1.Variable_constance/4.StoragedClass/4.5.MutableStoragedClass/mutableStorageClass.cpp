// C++ program to illustrate the use of mutalbe storage
// class specifiers
#include <iostream>
using namespace std;

class Test
{
public:
    int x;
    // defining mutable variable y now this can be modified
    mutable int y;

    Test()
    {
        x = 4;
        y = 10;
    }
};

int main()
{
    // t1 is set to constant
    const Test t1;

    // trying to change the value
    t1.y = 20;
    cout << t1.y << endl;

    // Uncommenting below lines
    // will throw error
    // t1.x = 8;
    cout << t1.x;
    return 0;
}

/*note:
Object Test declare is const so that the variable cannot be changes (readonly).
But it can modify by using the mutable keyword when we defening the variable */