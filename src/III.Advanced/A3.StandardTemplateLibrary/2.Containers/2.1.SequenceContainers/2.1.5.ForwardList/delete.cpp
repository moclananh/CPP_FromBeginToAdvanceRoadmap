#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> flist = {1, 2, 3, 4, 5};

    // Xóa phần tử đầu tiên
    flist.pop_front();

    // Xóa phần tử sau một iterator
    auto it = flist.begin();
    flist.erase_after(it); // Xóa phần tử thứ hai

    // In các phần tử của forward_list
    for (const auto &elem : flist)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
