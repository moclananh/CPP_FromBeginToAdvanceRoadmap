// C++ program toillustrate the use
// of cout.precision()
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    double pi = 3.14159783;

    // Set precision to 5
    cout.precision(5);

    // Print pi
    cout << pi << endl; // 3.1416

    // Set precision to 7
    cout.precision(7); // 3.141598v

    // Print pi
    cout << pi << endl;

    return 0;
}
