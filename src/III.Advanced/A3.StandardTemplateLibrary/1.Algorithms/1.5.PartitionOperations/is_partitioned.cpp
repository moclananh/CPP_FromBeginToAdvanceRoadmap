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

    bool result = std::is_partitioned(vec.begin(), vec.end(), isEven);

    // In kết quả kiểm tra
    if (result)
    {
        std::cout << "The array is partitioned." << std::endl;
    }
    else
    {
        std::cout << "The array is not partitioned." << std::endl;
    }

    // Phân chia lại mảng
    std::partition(vec.begin(), vec.end(), isEven);

    // Kiểm tra lại
    result = std::is_partitioned(vec.begin(), vec.end(), isEven);

    // In kết quả kiểm tra lại
    if (result)
    {
        std::cout << "The array is now partitioned." << std::endl;
    }
    else
    {
        std::cout << "The array is still not partitioned." << std::endl;
    }

    return 0;
}
