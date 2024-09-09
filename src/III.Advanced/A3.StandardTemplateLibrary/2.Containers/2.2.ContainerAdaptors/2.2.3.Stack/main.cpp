#include <iostream>
#include <stack> // Include thư viện stack để sử dụng std::stack

int main()
{
    // Khai báo stack lưu trữ số nguyên
    std::stack<int> s;

    // Thêm phần tử vào stack
    s.push(10);
    s.push(20);
    s.push(30);

    // Truy cập và in phần tử trên cùng của stack
    std::cout << "Top element: " << s.top() << std::endl;

    // Xóa phần tử trên cùng
    s.pop();

    // In lại phần tử trên cùng sau khi xóa
    std::cout << "Top element after pop: " << s.top() << std::endl;

    // Kiểm tra xem stack có rỗng hay không
    if (s.empty())
    {
        std::cout << "Stack is empty." << std::endl;
    }
    else
    {
        std::cout << "Stack is not empty." << std::endl;
    }

    // In số lượng phần tử trong stack
    std::cout << "Size of stack: " << s.size() << std::endl;

    return 0;
}
