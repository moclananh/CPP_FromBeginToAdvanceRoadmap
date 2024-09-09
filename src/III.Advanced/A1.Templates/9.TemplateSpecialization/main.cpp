#include <iostream>
using namespace std;

template <class T>
void show(T a)
{
    cout << "The main template: " << a << endl;
}

template <>
void show(int a)
{
    cout << "The specialized template: " << a << endl;
}

main()
{
    show(2);
    show(2.5);
    show("A");
    return 0;
}