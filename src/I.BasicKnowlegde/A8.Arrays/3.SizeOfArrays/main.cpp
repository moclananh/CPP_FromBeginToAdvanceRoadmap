// A C++ program to show that it is wrong to
// compute size of an array parameter in a function
#include <iostream>
using namespace std;

void findSize(int arr[])
{
    cout << sizeof(arr) << endl;
}

void findSize2(int (&arr)[10])
{
    cout << sizeof(arr) << endl;
}

template <size_t n>
void findSize3(int (&arr)[n])
{
    cout << sizeof(int) * n << endl;
}

int main()
{
    int a[10];
    cout << sizeof(a) << " " << endl;
    findSize(a);
    findSize2(a);
    findSize3(a);
    return 0;
}
