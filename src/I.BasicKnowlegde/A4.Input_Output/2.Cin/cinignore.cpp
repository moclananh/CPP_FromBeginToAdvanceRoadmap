// C++ program to illustrate the use
// of cin.ignore()
#include <iostream>

// used to get stream size
#include <ios>

// used to get numeric limits
#include <limits>
using namespace std;

// Driver Code
int main()
{
    int x;
    char str[10];
    cout << "Enter a number and string:\n";
    cin >> x;

    // clear buffer before taking
    // new line
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Input a string
    cin.getline(str, 10);
    cout << "You have entered:\n";
    cout << x << endl;
    cout << str << endl;

    return 0;
}

/*It ignores or clears one or more characters from the input buffer.*/
