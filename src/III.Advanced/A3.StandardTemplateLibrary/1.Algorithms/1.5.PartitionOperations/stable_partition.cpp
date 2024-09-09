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

    // In kết quả sau khi phân chia
    for (int n : vec)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
