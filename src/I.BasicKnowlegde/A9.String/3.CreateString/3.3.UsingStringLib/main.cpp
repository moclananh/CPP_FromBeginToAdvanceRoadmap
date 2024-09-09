// C++ program to demonstrate
// array of strings using
// string class
#include <iostream>
#include <string>

// Driver code
int main()
{
    // Initialize String Array
    std::string colour[4] = {"Blue", "Red", "Orange", "Yellow"};

    // Print Strings
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";
}
