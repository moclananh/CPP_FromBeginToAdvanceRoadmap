#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Khai báo mảng động
    int *arr = new int[size];

    // Nhập giá trị cho các phần tử của mảng
    for (int i = 0; i < size; ++i)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // In các phần tử của mảng
    cout << "The elements of the array are: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Giải phóng bộ nhớ của mảng động
    delete[] arr;

    return 0;
}
