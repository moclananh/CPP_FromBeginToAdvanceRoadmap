#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // Truy cập và in các phần tử của std::array
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}
