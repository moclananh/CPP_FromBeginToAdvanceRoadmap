#include <iostream>
#include <map> // Include thư viện map để sử dụng std::multimap

int main()
{
    // Khai báo multimap lưu trữ các cặp (key, value) kiểu int, std::string
    std::multimap<int, std::string> mm;
    // Thêm phần tử vào multimap
    mm.insert({1, "One"});
    mm.insert({2, "Two"});
    mm.insert({1, "Uno"});
    mm.insert({3, "Three"});
    mm.insert({2, "Dos"});

    // Duyệt và in các phần tử của multimap
    for (const auto &pair : mm)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Tìm tất cả các phần tử với key = 2
    auto range = mm.equal_range(2);
    std::cout << "Elements with key 2:" << std::endl;
    for (auto it = range.first; it != range.second; ++it)
    {
        std::cout << it->first << ": " << it->second << std::endl;
    }
    std::cout << "-------------------" << std::endl;
    // Xóa tất cả các phần tử có key = 1
    mm.erase(1);

    // In lại các phần tử của multimap sau khi xóa
    for (const auto &pair : mm)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
