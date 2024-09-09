// C++ Program to illustrate template arguments deduction in
// STL
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // creating a vector<float> object without specifying
    // type
    vector v1{1.1, 2.0, 3.9, 4.909};  
    cout << "Elements of v1 : ";
    for (auto i : v1)
    {
        cout << i << " ";
    }

    // creating a vector<int> object without specifying type
    vector v2{1, 2, 3, 4};
    cout << endl
         << "Elements of v2 : ";
    for (auto i : v2)
    {
        cout << i << " ";
    }
}
