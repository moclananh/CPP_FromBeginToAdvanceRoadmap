#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Truy cập phần tử bằng operator[]
    std::cout << "Element at index 2: " << vec[2] << std::endl;

    // Truy cập phần tử bằng at()
    std::cout << "Element at index 3: " << vec.at(3) << std::endl;

    return 0;
}
