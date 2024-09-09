#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> vec = {5, 3, 1, 4, 2};

    // Sắp xếp vector
    std::sort(vec.begin(), vec.end());

    // Tìm kiếm phần tử trong vector
    auto it = std::find(vec.begin(), vec.end(), 3);
    if (it != vec.end())
    {
        std::cout << "Element found at index: " << std::distance(vec.begin(), it) << std::endl;
    }
    else
    {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
