#include <iostream>
#include <deque>

int main()
{
    // Khai báo deque
    std::deque<int> deq;

    // Khởi tạo deque với các phần tử
    std::deque<int> deq2 = {1, 2, 3, 4, 5};

    // Khởi tạo deque với kích thước và giá trị mặc định
    std::deque<int> deq3(10, 1); // deque với 10 phần tử, mỗi phần tử có giá trị là 1

    return 0;
}
