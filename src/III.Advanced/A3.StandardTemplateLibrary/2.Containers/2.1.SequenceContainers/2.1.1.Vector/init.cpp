#include <iostream>
#include <vector>

int main()
{
    // Khai báo vector
    std::vector<int> vec;

    // Khởi tạo vector với các phần tử
    std::vector<int> vec2 = {1, 2, 3, 4, 5};

    // Khởi tạo vector với kích thước và giá trị mặc định
    std::vector<int> vec3(10, 1); // vector với 10 phần tử, mỗi phần tử có giá trị là 1

    return 0;
}
