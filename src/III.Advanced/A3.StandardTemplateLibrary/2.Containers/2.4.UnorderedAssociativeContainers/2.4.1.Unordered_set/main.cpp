#include <iostream>
#include <unordered_set> // Include thư viện unordered_set để sử dụng std::unordered_set

int main()
{
    // Khai báo unordered_set lưu trữ các số nguyên
    std::unordered_set<int> us;

    // Thêm phần tử vào unordered_set
    us.insert(10);
    us.insert(30);
    us.insert(20);
    us.insert(40);
    us.insert(10); // Phần tử này sẽ không được thêm vào vì đã tồn tại trong unordered_set

    // Duyệt và in các phần tử của unordered_set
    for (const auto &elem : us)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Kiểm tra xem một phần tử có tồn tại trong unordered_set hay không
    int key = 20;
    if (us.find(key) != us.end())
    {
        std::cout << "Element " << key << " is in the unordered_set." << std::endl;
    }
    else
    {
        std::cout << "Element " << key << " is not in the unordered_set." << std::endl;
    }

    // Xóa phần tử khỏi unordered_set
    us.erase(30);

    // In lại các phần tử của unordered_set sau khi xóa
    for (const auto &elem : us)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
