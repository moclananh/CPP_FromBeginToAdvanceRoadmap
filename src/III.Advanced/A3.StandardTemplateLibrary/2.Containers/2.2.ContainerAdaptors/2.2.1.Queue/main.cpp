#include <iostream>
#include <queue>

int main()
{
    // Khai báo queue
    std::queue<int> q;

    // Thêm phần tử vào queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Truy cập và in các phần tử của queue
    std::cout << "Front element: " << q.front() << std::endl; // In phần tử đầu tiên
    std::cout << "Back element: " << q.back() << std::endl;   // In phần tử cuối cùng

    // Xóa phần tử đầu tiên
    q.pop();

    // In lại phần tử đầu tiên sau khi xóa
    std::cout << "Front element after pop: " << q.front() << std::endl;

    // Kiểm tra xem queue có rỗng hay không
    if (q.empty())
    {
        std::cout << "Queue is empty." << std::endl;
    }
    else
    {
        std::cout << "Queue is not empty." << std::endl;
    }

    // In số lượng phần tử trong queue
    std::cout << "Size of queue: " << q.size() << std::endl;

    return 0;
}
