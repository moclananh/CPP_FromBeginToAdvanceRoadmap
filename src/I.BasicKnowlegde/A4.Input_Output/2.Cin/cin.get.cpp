// C++ program to illustrate the use
// of cin.get()
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    char ch[30];
    cin.get(ch, 25);

    // Print ch
    cout << ch;
}

/*It reads an input character
and stores it in a variable.
*/