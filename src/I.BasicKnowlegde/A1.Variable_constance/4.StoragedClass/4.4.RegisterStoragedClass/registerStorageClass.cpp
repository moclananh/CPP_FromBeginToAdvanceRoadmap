// C++ Program to illustrate the use of register variables
#include <iostream>
using namespace std;

void registerStorageClass()
{

    cout << "Demonstrating register class\n";

    // declaring a register variable
    register char b = 'G';
    // The difference is: the compiler tries to
    // store these variables in the register of the microprocessor
    // if a free register is available.

    // printing the register variable 'b'
    cout << "Value of the variable 'b'"
         << " declared as register: " << b;
}
int main()
{

    // To demonstrate register Storage Class
    registerStorageClass();
    return 0;
}
