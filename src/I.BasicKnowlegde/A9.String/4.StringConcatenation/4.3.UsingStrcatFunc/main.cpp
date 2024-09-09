// C++ Program for string
// concatenation using strcat
#include <iostream>
#include <string.h>
using namespace std;

// Driver code
int main()
{
    char init[] = "this is init";
    char add[] = " added now";
    string test1 = "hello";
    string test2 = "worlds";
    // Concatenating the string.
    strcat(init, add);
    //  strcat(test1, test2); // error

    cout << init << endl;

    return 0;
}

/*note: That not work in string lib*/