#include <iostream>
#include <cstdlib> // Thư viện cần thiết cho malloc, realloc, và free

int main()
{
    // Cấp phát bộ nhớ cho một mảng gồm 5 số nguyên
    int *ptr = (int *)malloc(5 * sizeof(int));

    // Kiểm tra xem việc cấp phát bộ nhớ có thành công không
    if (ptr == NULL)
    {
        std::cout << "Initial memory allocation failed" << std::endl;
        return 1; // Kết thúc chương trình nếu không đủ bộ nhớ
    }

    // Sử dụng bộ nhớ được cấp phát
    for (int i = 0; i < 5; ++i)
    {
        ptr[i] = i * 2; // Gán giá trị cho các phần tử trong mảng
    }

    // Mở rộng bộ nhớ lên 10 số nguyên
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    // Kiểm tra xem việc mở rộng bộ nhớ có thành công không
    if (ptr == NULL)
    {
        std::cout << "Memory reallocation failed" << std::endl;
        return 1; // Kết thúc chương trình nếu không đủ bộ nhớ
    }

    // Sử dụng bộ nhớ mở rộng
    for (int i = 5; i < 10; ++i)
    {
        ptr[i] = i * 2; // Gán giá trị cho các phần tử mới trong mảng
    }

    // In các giá trị trong mảng
    std::cout << "Allocated memory values: ";
    for (int i = 0; i < 10; ++i)
    {
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;

    // Giải phóng bộ nhớ đã cấp phát
    free(ptr);

    return 0;
}
