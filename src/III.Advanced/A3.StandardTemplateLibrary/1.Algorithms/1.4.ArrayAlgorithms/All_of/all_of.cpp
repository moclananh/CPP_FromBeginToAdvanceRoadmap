// C++ code to demonstrate working of all_of()
#include <iostream>
#include <algorithm> // for all_of()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] = {1, 2, 3, 4, 5, -6};

    // Checking if all elements are positive
    all_of(ar, ar + 6, [](int x)
           { return x > 0; })
        ? cout << "All are positive elements"
        : cout << "All are not positive elements";

    return 0;
}
