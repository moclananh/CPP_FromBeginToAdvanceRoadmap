#include <iostream>
#include <list>

int main()
{
    // Khai báo một list các số nguyên
    std::list<int> myList;

    // Thêm phần tử vào list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_front(5); // Thêm phần tử vào đầu list

    // Duyệt và in các phần tử của list
    std::cout << "list: ";
    for (const int &value : myList)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Xóa phần tử đầu và cuối của list
    myList.pop_front();
    myList.pop_back();

    // In lại các phần tử sau khi xóa
    std::cout << "list after delete: ";
    for (const int &value : myList)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Chèn phần tử vào giữa list
    auto it = myList.begin();
    ++it;                  // Di chuyển iterator đến phần tử thứ hai
    myList.insert(it, 15); // Chèn phần tử 15 vào trước phần tử thứ hai

    // In lại các phần tử sau khi chèn
    std::cout << "list after changes: ";
    for (const int &value : myList)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
