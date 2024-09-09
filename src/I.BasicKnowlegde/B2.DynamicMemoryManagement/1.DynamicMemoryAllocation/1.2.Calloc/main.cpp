#include <iostream>
#include <cstdlib> // Thư viện cần thiết cho calloc và free

int main()
{
    int *ptr;

    // Cấp phát bộ nhớ cho một mảng gồm 5 số nguyên và khởi tạo về 0
    ptr = (int *)calloc(5, sizeof(int));

    // Kiểm tra xem việc cấp phát bộ nhớ có thành công không
    if (ptr == NULL)
    {
        std::cout << "Memory allocation failed" << std::endl;
        return 1; // Kết thúc chương trình nếu không đủ bộ nhớ
    }

    // In các giá trị trong mảng (tất cả đều là 0)
    std::cout << "Allocated memory values: ";
    for (int i = 0; i < 5; ++i)
    {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;

    // Giải phóng bộ nhớ đã cấp phát
    free(ptr);

    return 0;
}
