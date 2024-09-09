#include <iostream>
using namespace std;

class Test
{
private:
    int x;
    int y;

public:
    Test(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    Test &setX(int a)
    {
        this->x = a;
        return *this;
    }
    Test &setY(int b)
    {
        this->y = b;
        return (*this);
    }
    void destroy()
    {
        cout << "destroyed";
        delete this;
    }
    void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
    Test obj;
    obj.setX(20).setY(30);
    obj.print();
    obj.destroy();

    return 0;
}
