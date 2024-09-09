// C++ Program to demonstrate Virtual
// functions in derived classes
#include <iostream>
using namespace std;

class A
{
public:
    virtual void fun() { cout << "\n A::fun() called "; }
};

class B : public A
{
public:
    void fun() { cout << "\n B::fun() called "; }
};

class C : public B
{
public:
    void fun() { cout << "\n C::fun() called "; }
};

int main()
{
    // An object of class C
    C c;

    // A pointer of class B pointing
    // to memory location of c
    B *b = &c;

    // this line prints "C::fun() called"
    b->fun();

    getchar(); // to get the next character
    return 0;
}

// Never call a virtual function from a CONSTRUCTOR or DESTRUCTOR