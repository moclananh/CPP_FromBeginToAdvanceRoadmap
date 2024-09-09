#include <vector>
#include <iostream>

// Template vector
template <typename T>
using Vec = std::vector<T>;

int main()
{
    // Tạo một vector kiểu int bằng cách sử dụng bí danh Vec
    Vec<int> v = {1, 2, 3, 4, 5};

    // In ra các phần tử của vector
    for (int i : v)
    {
        std::cout << i << ' ';
    }

    return 0;
}
