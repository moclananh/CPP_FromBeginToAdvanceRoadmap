#include <iostream>
#include <valarray>
#include <cmath> // for sqrt

int main()
{
    std::valarray<int> va = {1, 2, 3, 4, 5};

    // Tính tổng các phần tử
    std::cout << "Sum: " << va.sum() << std::endl;

    // Tìm giá trị nhỏ nhất và lớn nhất
    std::cout << "Min: " << va.min() << std::endl;
    std::cout << "Max: " << va.max() << std::endl;

    // Áp dụng hàm sqrt lên tất cả các phần tử
    // std::valarray<double> sqrt_va = va.apply(std::sqrt);
    // for (int i = 0; i < sqrt_va.size(); ++i)
    // {
    //     std::cout << sqrt_va[i] << " ";
    // }
    std::cout << std::endl;

    return 0;
}
