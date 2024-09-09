// C++ program to show that local parameters hide
// class members
#include <iostream>
using namespace std;

class Test
{
    int a;

public:
    Test() { a = 1; }

    // Local parameter 'a' hides class member 'a'
    void func(int a) { cout << a << endl; }
    // We can access this a by using this keyword
    void func2(int a) { cout << this->a; }
};

// Driver Code
int main()
{
    Test obj;
    int k = 3;
    obj.func(k);
    obj.func2(k);
    return 0;
}
