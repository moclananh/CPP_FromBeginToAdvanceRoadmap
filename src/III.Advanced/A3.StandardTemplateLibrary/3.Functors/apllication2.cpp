#include <iostream>
#include <vector>
#include <algorithm>

// Định nghĩa functor
class Multiply
{
public:
    Multiply(int factor) : factor(factor) {}

    int operator()(int x) const
    {
        return x * factor;
    }

private:
    int factor;
};

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::vector<int> result(vec.size());

    // Sử dụng functor với std::transform
    std::transform(vec.begin(), vec.end(), result.begin(), Multiply(3));

    for (int x : result)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
