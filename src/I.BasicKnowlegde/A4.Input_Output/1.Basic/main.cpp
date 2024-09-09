#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age:";
    cin >> age;
    cout << "\nYour age is: " << age << endl;

    cerr << "Demo cerr print" << endl;

    clog << "Demo clog print";
    return 0;
}
