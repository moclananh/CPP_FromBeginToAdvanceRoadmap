// C++ Program to demonstrate use of getline function
#include <iostream>
using namespace std;

int main()
{

    string s;
    cout << "Enter String" << endl;
    // cin >> s;
    // same
    getline(cin, s);
    cout << "String is: " << s << endl;
    return 0;
}
