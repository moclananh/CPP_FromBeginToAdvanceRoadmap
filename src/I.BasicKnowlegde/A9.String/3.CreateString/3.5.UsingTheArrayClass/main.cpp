// C++ program to demonstrate
// array of string using STL array
#include <array>
#include <iostream>
#include <string>

// Driver code
int main()
{
    // Initialize array
    std::array arr = {"Blue", "Red", "Orange", "Yellow"};

    // Printing Strings stored in array
    for (int i = 0; i < 4; i++)
        std::cout << arr[i] << "\n";

    return 0;
}
