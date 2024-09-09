#include <iostream>
#include <set> // Include thư viện set để sử dụng std::set

int main()
{
    // Khai báo set lưu trữ số nguyên
    std::set<int> s;

    // Thêm phần tử vào set
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(20); // Phần tử này sẽ không được thêm vì đã tồn tại trong set

    // Duyệt và in các phần tử của set
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Kiểm tra xem một phần tử có tồn tại trong set hay không
    if (s.find(20) != s.end())
    {
        std::cout << "Element 20 is in the set." << std::endl;
    }
    else
    {
        std::cout << "Element 20 is not in the set." << std::endl;
    }

    // Xóa phần tử khỏi set
    s.erase(20);

    // In lại các phần tử của set sau khi xóa
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
