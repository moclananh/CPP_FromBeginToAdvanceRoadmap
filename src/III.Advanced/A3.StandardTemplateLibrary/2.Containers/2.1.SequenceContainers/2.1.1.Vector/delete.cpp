#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Vec init" << endl;
    for (auto i : vec)
    {
        cout << i << " ";
    }

    cout << "\nec after delete last element" << endl;
    vec.pop_back(); // Xóa phần tử cuối cùng
    for (auto i : vec)
    {
        cout << i << " ";
    }

    cout << "\nVec after delete element [2]" << endl;
    vec.erase(vec.begin() + 1); // Xóa phần tử tại vị trí thứ hai
    for (auto i : vec)
    {
        cout << i << " ";
    }

    vec.clear(); // Xóa tất cả các phần tử

    std::cout << "\nSize of vector after clearing: " << vec.size() << std::endl;

    return 0;
}
