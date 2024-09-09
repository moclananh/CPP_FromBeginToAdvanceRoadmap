#include <iostream>
#include <unordered_map> // Include thư viện unordered_map để sử dụng std::unordered_multimap

int main()
{
    // Khai báo unordered_multimap lưu trữ cặp key-value (int, std::string)
    std::unordered_multimap<int, std::string> umm;

    // Thêm phần tử vào unordered_multimap
    umm.insert({1, "One"});
    umm.insert({2, "Two"});
    umm.insert({3, "Three"});
    umm.insert({4, "Four"});
    umm.insert({5, "Five"});
    umm.insert({1, "Uno"}); // Cho phép key trùng lặp

    // Duyệt và in các phần tử của unordered_multimap
    for (const auto &pair : umm)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Kiểm tra xem một key có tồn tại trong unordered_multimap hay không
    int key = 3;
    if (umm.find(key) != umm.end())
    {
        std::cout << "Element with key " << key << " is in the unordered_multimap." << std::endl;
    }
    else
    {
        std::cout << "Element with key " << key << " is not in the unordered_multimap." << std::endl;
    }

    // Xóa tất cả các phần tử có key là 1
    umm.erase(1);

    // In lại các phần tử của unordered_multimap sau khi xóa
    for (const auto &pair : umm)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
