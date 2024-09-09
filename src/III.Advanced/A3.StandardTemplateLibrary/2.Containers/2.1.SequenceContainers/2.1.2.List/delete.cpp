#include <iostream>
#include <list>

int main()
{
    std::list<int> lst = {1, 2, 3, 4, 5};

    lst.pop_back();  // Xóa phần tử cuối cùng
    lst.pop_front(); // Xóa phần tử đầu tiên
    lst.remove(3);   // Xóa tất cả các phần tử có giá trị là 3

    // In các phần tử của list
    for (auto i : lst)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
