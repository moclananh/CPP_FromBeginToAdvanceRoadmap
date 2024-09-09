// C++ program to illustrate the use
// of cin.read()
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    char gfg[20];

    // Reads stream of characters
    cin.read(gfg, 10);

    // Print output
    cout << gfg << endl;

    return 0;
}
// Reads a stream of characters of length N