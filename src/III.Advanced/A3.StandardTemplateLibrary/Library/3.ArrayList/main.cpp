#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {10, 20, 30, 40, 50};

    // Thêm phần tử vào vector
    vec.push_back(60);

    // Truy cập phần tử trong vector
    for (int i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
