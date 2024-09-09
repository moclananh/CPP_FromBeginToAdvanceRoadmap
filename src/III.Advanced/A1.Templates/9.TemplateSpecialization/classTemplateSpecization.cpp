#include <iostream>
using namespace std;

template <class T>
class Test
{
public:
    Test()
    {
        cout << "General template object" << endl;
    }
};

template <>
class Test<int>
{
public:
    Test()
    {
        cout << "Specialization template object" << endl;
    }
};

main()
{
    Test<int> a;
    Test<char> c;
    Test<float> f;
    return 0;
}