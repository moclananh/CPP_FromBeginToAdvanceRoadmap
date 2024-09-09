#include <iostream>
#include <deque>

int main()
{
    std::deque<int> deq = {1, 2, 3, 4, 5};

    // Thay đổi kích thước của deque
    deq.resize(3);

    // In các phần tử của deque sau khi thay đổi kích thước
    for (auto it : deq)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    // Gán giá trị cho deque
    deq.assign(5, 10); // deque với 5 phần tử, mỗi phần tử có giá trị là 10

    // In các phần tử của deque sau khi gán giá trị
    for (auto it : deq)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    return 0;
}
