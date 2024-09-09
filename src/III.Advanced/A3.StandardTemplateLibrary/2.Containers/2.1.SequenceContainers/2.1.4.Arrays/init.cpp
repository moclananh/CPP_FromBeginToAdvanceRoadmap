#include <iostream>
using namespace std;

int main()
{
    // Khai báo mảng tĩnh với kích thước cố định
    int arr[5];                    // Khởi tạo nhưng không gán giá trị ban đầu
    int arr2[5] = {1, 2, 3, 4, 5}; // Khởi tạo và gán giá trị ban đầu
    int arr3[] = {1, 2, 3, 4, 5};  // Kích thước được suy ra từ số phần tử

    // Khởi tạo một mảng với tất cả các phần tử là 0
    int arr4[5] = {0};

    // Khởi tạo một mảng với các phần tử khác 0 và phần còn lại là 0
    int arr5[5] = {1, 2}; // {1, 2, 0, 0, 0}

    return 0;
}
