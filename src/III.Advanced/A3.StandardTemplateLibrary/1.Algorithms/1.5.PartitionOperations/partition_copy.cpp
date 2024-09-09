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
    std::vector<int> evens;
    std::vector<int> odds;

    // Đặt kích thước cho các vector đích
    evens.resize(vec.size());
    odds.resize(vec.size());

    // Sử dụng partition_copy để phân chia và sao chép các phần tử
    auto it = std::partition_copy(vec.begin(), vec.end(), evens.begin(), odds.begin(), isEven);

    // Xóa các phần tử dư thừa
    evens.resize(std::distance(evens.begin(), it.first));
    odds.resize(std::distance(odds.begin(), it.second));

    // In các phần tử chẵn
    std::cout << "Even elements: ";
    for (int n : evens)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // In các phần tử lẻ
    std::cout << "Odd elements: ";
    for (int n : odds)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
