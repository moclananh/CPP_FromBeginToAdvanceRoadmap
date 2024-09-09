// C++ program to illustrate the use
// of cin.getline
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    char name[5];

    // Reads stream of 3
    // characters
    cin.getline(name, 3);

    // Print output
    cout << name << endl;

    return 0;
}

/*
It reads a stream of characters of length N into the string buffer,
It stops when it has read (N – 1) characters or it finds the end of the file or newline character(\n).
*/