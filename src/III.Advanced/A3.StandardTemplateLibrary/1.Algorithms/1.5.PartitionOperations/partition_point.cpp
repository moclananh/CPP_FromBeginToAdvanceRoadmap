#include <iostream>
#include <vector>
#include <algorithm>

// Điều kiện: phần tử chẵn
bool isEven(int n)
{
    return n % 2 == 0;
}

int main()
{
    std::vector<int> vec = {1, 4, 2, 8, 5, 7};

    // Sử dụng stable_partition để phân chia
    std::stable_partition(vec.begin(), vec.end(), isEven);

    // Tìm partition point
    auto it = std::partition_point(vec.begin(), vec.end(), isEven);

    // In các phần tử chẵn
    std::cout << "Even elements: ";
    for (auto i = vec.begin(); i != it; ++i)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    // In các phần tử lẻ
    std::cout << "Odd elements: ";
    for (auto i = it; i != vec.end(); ++i)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    return 0;
}
