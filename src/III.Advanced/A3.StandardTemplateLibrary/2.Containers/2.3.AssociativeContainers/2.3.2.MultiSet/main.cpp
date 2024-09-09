#include <iostream>
#include <set> // Include thư viện set để sử dụng std::multiset

int main()
{
    // Khai báo multiset lưu trữ số nguyên
    std::multiset<int> ms;

    // Thêm phần tử vào multiset
    ms.insert(10);
    ms.insert(20);
    ms.insert(10); // Phần tử này sẽ được thêm vào dù đã tồn tại trong multiset
    ms.insert(30);

    // Duyệt và in các phần tử của multiset
    for (auto it : ms)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    // Đếm số lượng phần tử cụ thể trong multiset
    std::cout << "Count of element 10: " << ms.count(10) << std::endl;

    // Xóa tất cả các phần tử có giá trị 10
    ms.erase(10);

    // In lại các phần tử của multiset sau khi xóa
    for (auto it : ms)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;

    return 0;
}
