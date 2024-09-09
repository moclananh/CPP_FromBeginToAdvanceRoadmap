#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> flist1 = {1, 3, 5};
    std::forward_list<int> flist2 = {2, 4, 6};

    // Sắp xếp forward_list (nếu chưa được sắp xếp)
    flist1.sort();
    flist2.sort();

    // Hợp nhất hai forward_list đã được sắp xếp
    flist1.merge(flist2);

    // In các phần tử của forward_list sau khi hợp nhất
    for (const auto &elem : flist1)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
