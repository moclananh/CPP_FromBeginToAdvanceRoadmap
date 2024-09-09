#include <iostream>
#include <vector>
#include <algorithm>

// Định nghĩa functor
class Print
{
public:
    void operator()(int x) const
    {
        std::cout << x << " ";
    }
};

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Sử dụng functor với std::for_each
    std::for_each(vec.begin(), vec.end(), Print());
    std::cout << std::endl;

    return 0;
}
