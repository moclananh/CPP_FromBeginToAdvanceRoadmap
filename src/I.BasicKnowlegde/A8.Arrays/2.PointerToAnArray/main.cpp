#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 22, 33, 42, 55};
    int *ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]); // caculate the size of array.
    for (size_t i = 0; i < size; i++)
    {
        cout << "Value at ptr " << "[" << i << "]: " << ptr[i] << endl;
    }

    // for (size_t i = 0; i < 5; i++)
    // {
    //     cout << "Value at arr " << "[" << i << "]: " << arr[i] << endl;
    // }
    cout << "Ptr address: " << ptr << endl;
    return 0;
}
