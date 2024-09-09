// C++ program to illustrate the use
// of the Enums

#include <bits/stdc++.h>
using namespace std;

// Defining an enum
enum GeeksforGeeks
{
    Geek1,
    Geek2,
    Geek3
};

// Driver Code
int main()
{
    cout << "The numerical value "
         << "assigned to Geek1 : " << GeeksforGeeks::Geek1 << endl;

    cout << "The numerical value "
         << "assigned to Geek2 : " << GeeksforGeeks::Geek2 << endl;

    cout << "The numerical value "
         << "assigned to Geek3 : " << GeeksforGeeks::Geek3 << endl;

    return 0;
}
