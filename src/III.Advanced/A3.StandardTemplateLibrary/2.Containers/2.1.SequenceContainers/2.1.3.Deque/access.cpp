#include <iostream>
#include <deque>

int main()
{
    std::deque<int> deq = {1, 2, 3, 4, 5};

    // Truy cập phần tử đầu tiên
    std::cout << "First element: " << deq.front() << std::endl;

    // Truy cập phần tử cuối cùng
    std::cout << "Last element: " << deq.back() << std::endl;

    return 0;
}
