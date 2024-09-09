// CPP program to illustrate
// operators that can be overloaded
#include <bits/stdc++.h>
using namespace std;

class GFG
{
public:
    int num;
    GFG(int j) { num = j; }
    GFG *operator->(void) { return this; }
};

// Driver code
int main()
{
    GFG T(5);
    GFG *Ptr = &T;

    // Accessing num normally
    cout << "T.num = " << T.num << endl;

    // Accessing num using normal object pointer
    cout << "Ptr->num = " << Ptr->num << endl;

    // Accessing num using -> operator
    cout << "T->num = " << T->num << endl;

    return 0;
}
 