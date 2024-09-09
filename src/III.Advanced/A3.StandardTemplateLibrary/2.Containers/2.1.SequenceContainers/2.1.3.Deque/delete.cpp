#include <iostream>
#include <deque>

int main()
{
    std::deque<int> deq = {1, 2, 3, 4, 5};

    deq.pop_back();  // Xóa phần tử cuối cùng
    deq.pop_front(); // Xóa phần tử đầu tiên

    // In các phần tử của deque
    for (auto it = deq.begin(); it != deq.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
