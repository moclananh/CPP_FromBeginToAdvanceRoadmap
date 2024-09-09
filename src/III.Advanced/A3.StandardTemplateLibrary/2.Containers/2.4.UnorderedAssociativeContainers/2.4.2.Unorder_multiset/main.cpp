#include <iostream>
#include <unordered_set> // Include thư viện unordered_set để sử dụng std::unordered_multiset

int main()
{
    // Khai báo unordered_multiset lưu trữ các số nguyên
    std::unordered_multiset<int> ums;

    // Thêm phần tử vào unordered_multiset
    ums.insert(10);
    ums.insert(20);
    ums.insert(30);
    ums.insert(40);
    ums.insert(10); // Phần tử này sẽ được thêm vào vì unordered_multiset cho phép các phần tử trùng lặp

    // Duyệt và in các phần tử của unordered_multiset
    for (const auto &elem : ums)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Kiểm tra xem một phần tử có tồn tại trong unordered_multiset hay không
    int key = 20;
    if (ums.find(key) != ums.end())
    {
        std::cout << "Element " << key << " is in the unordered_multiset." << std::endl;
    }
    else
    {
        std::cout << "Element " << key << " is not in the unordered_multiset." << std::endl;
    }

    // Xóa tất cả các phần tử có giá trị 10
    ums.erase(10);

    // In lại các phần tử của unordered_multiset sau khi xóa
    for (const auto &elem : ums)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
