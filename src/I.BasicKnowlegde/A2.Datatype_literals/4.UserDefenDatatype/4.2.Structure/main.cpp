// C++ program to demonstrate
// Structures in C++

#include <iostream>
using namespace std;

// declaring structure
struct Point
{
    int x, y;
    bool z;
    string str;
};

int main()
{
    // Create an array of structures
    struct Point arr[10]; // same to ArrayList

    // Access array members
    arr[0].x = 10;
    arr[0].y = 20;
    arr[0].z = true;
    arr[0].str = "hello";

    cout << arr[0].x << ", " << arr[0].y << ", " << arr[0].z << ", " << arr[0].str;

    return 0;
}
