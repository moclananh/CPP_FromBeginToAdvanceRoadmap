// C++ program to demonstrate
// array of strings using
// 2D character array
#include <iostream>

// Driver code
int main()
{
    // Initialize 2D array
    char colour[4][10] = {"Blue", "Red", "Orange", "Yellow"};

    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";

    return 0;
}
