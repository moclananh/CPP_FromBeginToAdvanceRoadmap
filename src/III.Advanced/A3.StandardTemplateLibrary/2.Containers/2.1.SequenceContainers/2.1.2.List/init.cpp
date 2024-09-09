#include <iostream>
#include <list>

int main()
{
    // Khai báo list
    std::list<int> lst;

    // Khởi tạo list với các phần tử
    std::list<int> lst2 = {1, 2, 3, 4, 5};

    // Khởi tạo list với kích thước và giá trị mặc định
    std::list<int> lst3(10, 1); // list với 10 phần tử, mỗi phần tử có giá trị là 1

    return 0;
}
