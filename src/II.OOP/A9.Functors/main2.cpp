#include <iostream>
using namespace std;

// Định nghĩa một functor bằng cách quá tải toán tử ()
class Increment
{
private:
    int num;

public:
    Increment(int n) : num(n) {}

    // Quá tải toán tử gọi hàm
    // This operator overloading enables calling
    // operator function () on objects of increment
    int operator()(int arrNum) const
    {
        return num + arrNum;
    }
};

int main()
{
    // Tạo một functor với giá trị tăng là 5
    Increment increment(5);

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sử dụng functor để tăng giá trị của mỗi phần tử trong mảng
    for (int i = 0; i < n; i++)
    {
        arr[i] = increment(arr[i]);
    }

    // In các phần tử của mảng sau khi đã tăng
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
