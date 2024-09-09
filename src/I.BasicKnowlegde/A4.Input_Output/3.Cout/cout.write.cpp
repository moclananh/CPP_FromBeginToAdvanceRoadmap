// C++ program to illustrate the use
// of cout.write() and cout.put()
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    char gfg[] = "Welcome at GFG";
    char ch = 'e';

    // Print first 6 characters
    cout.write(gfg, 6);

    // Print the character ch
    cout.put(ch);
    return 0;
}
