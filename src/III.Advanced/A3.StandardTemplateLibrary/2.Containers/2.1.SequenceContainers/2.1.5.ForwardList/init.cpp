#include <iostream>
#include <forward_list>

int main()
{
    // Khai báo forward_list
    std::forward_list<int> flist;

    // Khởi tạo forward_list với các phần tử
    std::forward_list<int> flist2 = {1, 2, 3, 4, 5};

    // Khởi tạo forward_list với kích thước và giá trị mặc định
    std::forward_list<int> flist3(5, 10); // forward_list với 5 phần tử, mỗi phần tử có giá trị là 10

    return 0;
}
