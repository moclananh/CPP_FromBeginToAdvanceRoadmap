#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> flist = {1, 2, 3};

    // Thêm phần tử vào đầu forward_list
    flist.push_front(0);

    // Thêm phần tử sau một iterator
    auto it = flist.insert_after(flist.begin(), 4);

    // In các phần tử của forward_list
    for (const auto &elem : flist)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
