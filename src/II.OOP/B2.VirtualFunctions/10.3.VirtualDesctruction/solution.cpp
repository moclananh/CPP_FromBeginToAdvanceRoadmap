// A program with virtual destructor
#include <iostream>

using namespace std;

class base
{
public:
    base()
    {
        cout << "Constructing base\n";
    }
    virtual ~base() // using virtual keyword to applying the virtual destructor
    {
        cout << "Destructing base\n";
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "Constructing derived\n";
    }
    ~derived()
    {
        cout << "Destructing derived\n";
    }
};

int main()
{
    derived *d = new derived();
    base *b = d;
    delete b;
    getchar();
    return 0;
}
