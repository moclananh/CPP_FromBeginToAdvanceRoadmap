// C++ program to illustrate the static storage class
// objects
#include <iostream>
using namespace std;

// Function containing static variables
// memory is retained during execution
int staticFun()
{
    cout << "For static variables: ";
    static int count = 0;
    count++;
    return count;
}

// Function containing non-static variables
// memory is destroyed
int nonStaticFun()
{
    cout << "For Non-Static variables: ";

    int count = 0;
    count++;
    return count;
}

int main()
{

    // Calling the static parts
    cout << staticFun() << "\n"; // op: 1
    cout << staticFun() << "\n"; // op: 2

    cout << "-----------" << endl;
    // Calling the non-static parts
    cout << nonStaticFun() << "\n"; // op: 1
    cout << nonStaticFun() << "\n"; // op: 1

    return 0;
}
