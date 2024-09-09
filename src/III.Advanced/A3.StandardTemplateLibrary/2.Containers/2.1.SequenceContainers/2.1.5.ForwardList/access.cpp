#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> flist = {1, 2, 3, 4, 5};

    // Truy cập phần tử đầu tiên
    std::cout << "First element: " << flist.front() << std::endl;

    return 0;
}
