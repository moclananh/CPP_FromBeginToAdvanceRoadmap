// C++ program to Demonstrate Pointer to Structure
#include <iostream>
#include <stdio.h>

using namespace std;

// Structure declaration for
// vertices
struct GFG
{
    int x;
    int y;
};

// Structure declaration for
// Square
struct square
{

    // An object left is declared
    // with 'GFG'
    struct GFG left;

    // An object right is declared
    // with 'GFG'
    struct GFG right;
};

// Function to calculate area of
// the given Square
void area_Square(struct square s)
{
    // Find the area of the Square
    // using variables of point
    // structure where variables of
    // point structure is accessed
    // by left and right objects
    int area = (s.right.x) * (s.left.x);

    // Print the area
    cout << area << endl;
}

// Driver Code
int main()
{
    // Initialize variable 's'
    // with vertices of Square
    struct square s = {{4, 4}, {4, 4}};

    // Function Call
    area_Square(s);

    return 0;
}
