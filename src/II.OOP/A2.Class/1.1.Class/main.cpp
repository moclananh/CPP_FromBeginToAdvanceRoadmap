#include <iostream>
using namespace std;

class A
{
public:
    int x, y;
    float z;
    void Display()
    {
        cout << "value is: " << x << " " << y << " " << z << endl;
    }
};

int main()
{
    A a;
    a.x = 10;
    a.y = 20;
    a.z = 29.5;

    a.Display();
    return 0;
}