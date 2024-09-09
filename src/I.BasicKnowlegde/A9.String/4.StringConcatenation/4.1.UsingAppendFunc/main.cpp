// C++ Program for string
// concatenation using append
#include <iostream>
using namespace std;

// Driver code
int main()
{
    string init("this is init");
    string add(" added now");

    // Appending the string.
    init.append(add);

    cout << init << endl;
    return 0;
}
