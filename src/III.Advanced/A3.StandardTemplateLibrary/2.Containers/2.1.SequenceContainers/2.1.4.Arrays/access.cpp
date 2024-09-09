#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Truy cập và in các phần tử của mảng
    for (int i = 0; i < n; ++i)
    {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }

    return 0;
}
