#include <iostream>
#include <cstdlib> // Thư viện cần thiết cho malloc, calloc, và free

int main()
{
    // Cấp phát bộ nhớ cho một mảng gồm 5 số nguyên sử dụng malloc
    int *ptr1 = (int *)malloc(5 * sizeof(int));

    // Kiểm tra xem việc cấp phát bộ nhớ có thành công không
    if (ptr1 == NULL)
    {
        std::cout << "Memory allocation failed" << std::endl;
        return 1; // Kết thúc chương trình nếu không đủ bộ nhớ
    }

    // Sử dụng bộ nhớ được cấp phát
    for (int i = 0; i < 5; ++i)
    {
        ptr1[i] = i * 2; // Gán giá trị cho các phần tử trong mảng
    }

    // Giải phóng bộ nhớ đã cấp phát
    free(ptr1);

    // Cấp phát bộ nhớ cho một mảng gồm 5 số nguyên sử dụng calloc
    int *ptr2 = (int *)calloc(5, sizeof(int));

    // Kiểm tra xem việc cấp phát bộ nhớ có thành công không
    if (ptr2 == NULL)
    {
        std::cout << "Memory allocation failed" << std::endl;
        return 1; // Kết thúc chương trình nếu không đủ bộ nhớ
    }

    // In các giá trị trong mảng (tất cả đều là 0 do calloc khởi tạo)
    std::cout << "Allocated memory values: ";
    for (int i = 0; i < 5; ++i)
    {
        std::cout << ptr2[i] << " ";
    }
    std::cout << std::endl;

    // Giải phóng bộ nhớ đã cấp phát
    free(ptr2);

    return 0;
}
