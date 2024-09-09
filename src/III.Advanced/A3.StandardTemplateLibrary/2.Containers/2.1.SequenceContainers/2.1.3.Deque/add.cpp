#include <iostream>
#include <deque>

int main()
{
    std::deque<int> deq;

    // Thêm phần tử vào cuối deque
    deq.push_back(1);
    deq.push_back(2);

    // Thêm phần tử vào đầu deque
    deq.push_front(0);

    // In các phần tử của deque
    for (auto it = deq.begin(); it != deq.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
