// C++ Program to print string using pointers
#include <iostream>
using namespace std;

int main()
{

    string s = "Geeksforgeeks";

    // pointer variable declared to store the starting
    // address of the string
    char *p = &s[0];

    // this loop will execute and print the character till
    // the character value is null this loop will execute and
    // print the characters

    while (*p != '\0')
    {
        cout << *p;
        p++;
    }
    cout << endl;

    return 0;
}
