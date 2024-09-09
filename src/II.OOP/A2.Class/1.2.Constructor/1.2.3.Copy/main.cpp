// C++ Program to demonstrate how to define the explicit
// copy constructor
#include <iostream>
using namespace std;

class Sample
{
    int id;

public:
    // default constructor with empty body
    Sample() {}

    // parameterized constructor
    Sample(int x) { id = x; }

    // copy constructor
    Sample(Sample &t) { id = t.id; }

    void display() { cout << "ID=" << id; }
};

// driver code
int main()
{
    Sample obj1(10);
    obj1.display();
    cout << endl;

    // copy constructor called
    Sample obj2(obj1); // or obj2=obj1;
    obj2.display();

    return 0;
}
