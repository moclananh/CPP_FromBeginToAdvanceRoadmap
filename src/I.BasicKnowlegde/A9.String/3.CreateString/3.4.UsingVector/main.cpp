// C++ program to demonstrate
// array of strings using
// vector class
#include <iostream>
#include <string>
#include <vector>

// Driver code
int main()
{
    // Declaring Vector of String type
    // Values can be added here using
    // initializer-list
    // syntax
    std::vector<std::string> colour{"Blue", "Red",
                                    "Orange"};

    // Strings can be added at any time
    // with push_back
    colour.push_back("Yellow");
    //  colour.pop_back(); remove the last entity

    // Print Strings stored in Vector
    for (int i = 0; i < colour.size(); i++)
        std::cout << colour[i] << "\n";
}
