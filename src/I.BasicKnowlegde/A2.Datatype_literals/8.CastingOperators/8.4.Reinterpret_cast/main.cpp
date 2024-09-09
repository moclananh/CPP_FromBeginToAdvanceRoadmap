// C++ program to illustrate the reinterpret_cast
#include <iostream>
using namespace std;

int main()
{
    int number = 10;
    // Store the address of number in numberPointer
    int *numberPointer = &number;

    // Reinterpreting the pointer as a char pointer
    char *charPointer = reinterpret_cast<char *>(numberPointer);

    // Printing the memory addresses and values
    cout << "Integer Address: " << numberPointer << endl;
    cout << "Char Address: "
         << reinterpret_cast<void *>(charPointer) << endl;

    cout << "Integer value: " << *numberPointer << endl;
    cout << "char address: " << &charPointer << endl;
    return 0;
}