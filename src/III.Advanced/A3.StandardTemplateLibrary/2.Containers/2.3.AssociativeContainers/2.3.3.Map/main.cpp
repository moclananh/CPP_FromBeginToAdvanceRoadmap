#include <iostream>
#include <map> // Include thư viện map để sử dụng std::map

int main()
{
    // Khai báo map lưu trữ các cặp (key, value) kiểu int, std::string
    std::map<int, std::string> m;

    // Thêm phần tử vào map
    m[1] = "One";
    m[2] = "Two";
    m[3] = "Three";

    // Duyệt và in các phần tử của map
    for (const auto &pair : m)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Kiểm tra xem một key có tồn tại trong map hay không
    int key = 2;
    if (m.find(key) != m.end())
    {
        std::cout << "Key " << key << " is in the map with value: " << m[key] << std::endl;
    }
    else
    {
        std::cout << "Key " << key << " is not in the map." << std::endl;
    }

    // Xóa phần tử khỏi map
    m.erase(2);

    // In lại các phần tử của map sau khi xóa
    for (const auto &pair : m)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
