// A program with compilation error to demonstrate that
// a Local class cannot contain static data members
#include <iostream>
using namespace std;

void fun()
{
    class Test
    {
        // static int i;  //cannot contain static variable
        static void print(); // fine
    };
}

int main() { return 0; }
