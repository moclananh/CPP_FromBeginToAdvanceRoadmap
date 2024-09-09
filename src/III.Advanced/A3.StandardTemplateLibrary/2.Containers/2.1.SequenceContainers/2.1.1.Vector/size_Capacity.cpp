#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Capacity: " << vec.capacity() << std::endl;

    vec.resize(10); // Thay đổi kích thước của vector
    std::cout << "Size after resizing: " << vec.size() << std::endl;

    vec.reserve(20); // Đặt dung lượng tối thiểu cho vector
    std::cout << "Capacity after reserving: " << vec.capacity() << std::endl;

    return 0;
}
