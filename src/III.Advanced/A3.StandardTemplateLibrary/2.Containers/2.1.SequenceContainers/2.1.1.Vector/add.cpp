#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    vec.push_back(1); // Thêm phần tử vào cuối vector
    vec.push_back(2);
    vec.emplace_back(3); // Tạo và thêm phần tử vào cuối vector

    // In các phần tử của vector
    for (int i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
