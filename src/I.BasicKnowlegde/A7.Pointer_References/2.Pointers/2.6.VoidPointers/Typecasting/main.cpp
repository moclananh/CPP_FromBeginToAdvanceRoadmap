#include <iostream>

int main()
{
    int a = 20;
    void *ptr = &a; // Con trỏ void trỏ đến int

    // Chuyển đổi con trỏ void về con trỏ int
    int *intPtr = static_cast<int *>(ptr);
    // Truy cập giá trị
    std::cout << "Value of a: " << *intPtr << std::endl; // Output: 20

    return 0;
}
