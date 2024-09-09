// C++ program to demonstrate the use
// of struct using typedef
#include <bits/stdc++.h>
using namespace std;

/*typedef is a keyword that is used to assign a new name to any existing data-type.
Below is the C++ program illustrating use of struct using typedef*/

// Declaration of typedef
typedef struct GeekForGeeks
{

    int G1;
    char G2;
    float G3;

} GFG;

// Driver Code
int main()
{
    GFG Geek; // Now create structure variables without using the keyword “struct” and the name of the struct.
    Geek.G1 = 85;
    Geek.G2 = 'G';
    Geek.G3 = 989.45;

    cout << "The value is : " << Geek.G1 << endl;

    cout << "The value is : " << Geek.G2 << endl;

    cout << "The value is : " << Geek.G3 << endl;

    return 0;
}
