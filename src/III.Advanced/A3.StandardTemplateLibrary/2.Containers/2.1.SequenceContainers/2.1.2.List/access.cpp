#include <iostream>
#include <list>

int main()
{
    std::list<int> lst = {1, 2, 3, 4, 5};

    // Truy cập phần tử đầu tiên
    std::cout << "First element: " << lst.front() << std::endl;

    // Truy cập phần tử cuối cùng
    std::cout << "Last element: " << lst.back() << std::endl;

    return 0;
}
