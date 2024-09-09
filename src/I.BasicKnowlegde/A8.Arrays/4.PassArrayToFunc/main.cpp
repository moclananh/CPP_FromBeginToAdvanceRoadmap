// C program to pass the array as a function and check its size
#include <stdio.h>
#include <stdlib.h>

// Note that arr[] for fun is just a pointer even if square
// brackets are used. It is same as
// void fun(int *arr) or void fun(int arr[size])
void func(int arr[8])
{
    printf("Size of arr[] in func(): %d bytes",
           sizeof(arr));
}

// Drive code
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("Size of arr[] in main(): %dbytes\n",
           sizeof(arr));

    func(arr);
    // out: 32, 8
    /*
    sizeof(arr) trả về kích thước của toàn bộ mảng arr.
    Nếu int có kích thước 4 byte, thì mảng arr có 8 phần tử,
    tổng kích thước là 8 * 4 = 32 bytes.
    Trong hàm func, sizeof(arr) trả về kích thước của con trỏ, không phải của toàn bộ mảng.
    (thường là 8 bytes trên hệ thống 64-bit và 4 bytes trên hệ thống 32-bit).
    */
    return 0;
}
