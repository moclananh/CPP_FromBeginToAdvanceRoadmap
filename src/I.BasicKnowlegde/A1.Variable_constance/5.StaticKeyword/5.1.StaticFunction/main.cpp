// C++ program to demonstrate static
// member function in a class
#include <iostream>
using namespace std;

class GfG
{
public:
    // static member function
    static void printMsg() { cout << "Welcome to GfG!"; }
};

// main function
int main()
{
    // invoking a static member function
    GfG::printMsg();
}
