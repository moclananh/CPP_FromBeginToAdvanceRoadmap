#include <iostream>
#include <list>

int main()
{
    std::list<int> lst;

    // Thêm phần tử vào cuối list
    lst.push_back(1);
    lst.push_back(2);

    // Thêm phần tử vào đầu list
    lst.push_front(0);

    // In các phần tử của list
    for (auto i : lst)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
