// C++ program to illustrate the const_cast
#include <iostream>
using namespace std;

int main()
{

    const int number = 5;
    // Pointer to a const int
    const int* ptr = &number;

    // int* nonConstPtr = ptr; if we use this
    // instead of without using const_cast
    // we will get error of invalid conversion
    int* nonConstPtr = const_cast<int*>(ptr);
    *nonConstPtr = 10;

    cout << "Modified number: " << *nonConstPtr;

    return 0;
}