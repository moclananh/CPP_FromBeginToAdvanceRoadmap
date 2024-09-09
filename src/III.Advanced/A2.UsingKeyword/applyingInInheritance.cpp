#include <iostream>
using namespace std;

class Base
{
public:
    int x;
    Base(int a) : x(a){};
};

class Derived : public Base
{
public:
    int y;
    using Base::Base;
};

int main()
{
    Derived d(42);
    d.y = 30;
    cout << d.x << " " << d.y << endl;
    return 0;
}