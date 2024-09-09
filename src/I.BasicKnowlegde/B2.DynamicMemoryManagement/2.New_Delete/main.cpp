#include <iostream>

int main()
{
    // Cấp phát bộ nhớ cho một số nguyên
    int *pInt = new int;

    *pInt = 10;

    // Cấp phát bộ nhớ cho một mảng gồm 5 số nguyên
    int *pArray = new int[5];

    // Gán giá trị cho các phần tử trong mảng
    for (int i = 0; i < 5; ++i)
    {
        pArray[i] = i * 2;
    }

    // In giá trị
    std::cout << "Single int value: " << *pInt << std::endl;
    std::cout << "Array values: ";
    for (int i = 0; i < 5; ++i)
    {
        std::cout << pArray[i] << " ";
    }
    std::cout << std::endl;

    // Giải phóng bộ nhớ
    delete pInt;
    delete[] pArray;

    return 0;
}
