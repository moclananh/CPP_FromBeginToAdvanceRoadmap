#include <iostream>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    Data data;

    data.i = 10;
    std::cout << "data.i: " << data.i << std::endl;

    data.f = 220.5;
    std::cout << "data.f: " << data.f << std::endl;

    strcpy(data.str, "Hello");
    std::cout << "data.str: " << data.str << std::endl;

    // Chú ý: Chỉ giá trị cuối cùng được lưu trong union là hợp lệ
    std::cout << "data.i: " << data.i << std::endl; // Dữ liệu không còn hợp lệ
    std::cout << "data.f: " << data.f << std::endl; // Dữ liệu không còn hợp lệ

    return 0;
}
