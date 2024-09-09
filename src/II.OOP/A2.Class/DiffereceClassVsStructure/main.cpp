// C++ Program to demonstrate that
// Members of a class are private
// by default
#include <iostream>

using namespace std;

class Test
{
    // x is private

    int x;
};

struct Test1
{
    int y;
};

int main()
{
    Test t;
    // compiler error because x is private
    // t.x = 20;

    Test1 t1; // fine because defaut of struct is public
    t1.y;
    return 0;
}
