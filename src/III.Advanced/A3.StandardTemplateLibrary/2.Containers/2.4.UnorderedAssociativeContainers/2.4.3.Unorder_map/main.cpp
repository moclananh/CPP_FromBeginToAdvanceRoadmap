#include <iostream>
#include <unordered_map> // Include thư viện unordered_map để sử dụng std::unordered_map

int main()
{
    // Khai báo unordered_map lưu trữ cặp key-value (int, std::string)
    std::unordered_map<int, std::string> um;

    // Thêm phần tử vào unordered_map
    um[1] = "One";
    um[4] = "Four";
    um[5] = "Five";
    um[2] = "Two";
    um[3] = "Three";

    // Duyệt và in các phần tử của unordered_map
    for (const auto &pair : um)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Kiểm tra xem một phần tử có tồn tại trong unordered_map hay không
    int key = 3;
    if (um.find(key) != um.end())
    {
        std::cout << "Element with key " << key << " is in the unordered_map." << std::endl;
    }
    else
    {
        std::cout << "Element with key " << key << " is not in the unordered_map." << std::endl;
    }

    // Xóa phần tử khỏi unordered_map
    um.erase(4);

    // In lại các phần tử của unordered_map sau khi xóa
    for (const auto &pair : um)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
