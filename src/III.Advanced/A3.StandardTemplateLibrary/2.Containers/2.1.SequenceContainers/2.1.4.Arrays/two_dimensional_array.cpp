#include <iostream>
using namespace std;

int main()
{
    // Khai báo và khởi tạo mảng hai chiều
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Truy cập và in các phần tử của mảng hai chiều
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
