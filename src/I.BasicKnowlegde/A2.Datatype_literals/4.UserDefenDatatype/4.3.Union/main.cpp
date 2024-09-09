#include <iostream>
using namespace std;

// Declaration of union is same as the structures
union test
{
    int x, y;
};

int main()
{
    // A union variable t
    union test t;

    // t.y also gets value 2
    t.x = 2;

    cout << "After making x = 2:" << endl
         << "x = " << t.x << ", y = " << t.y << endl;

    // t.x is also updated to 10
    t.y = 10;

    cout << "After making Y = 10:" << endl
         << "x = " << t.x << ", y = " << t.y << endl;

    return 0;
}
