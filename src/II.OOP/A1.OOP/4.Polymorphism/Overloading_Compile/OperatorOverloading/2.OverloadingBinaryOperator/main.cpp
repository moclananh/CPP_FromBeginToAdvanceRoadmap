// C++ program to show binary
// operator overloading
#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inch;

    Distance()
    {
        this->feet = 0;
        this->inch = 0;
    }

    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }

    // Overloading (+) operator to
    // perform addition of two distance
    // object
    // Call by reference
    Distance operator+(Distance &d2)
    {
        // Create an object to return
        Distance d3;

        d3.feet = this->feet + d2.feet;
        d3.inch = this->inch + d2.inch;

        // Return the resulting object
        return d3;
    }
};

// Driver Code
int main()
{
    Distance d1(8, 9);
    Distance d2(10, 2);
    Distance d3;

    // Use overloaded operator
    d3 = d1 + d2;

    cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch;
    return 0;
}
