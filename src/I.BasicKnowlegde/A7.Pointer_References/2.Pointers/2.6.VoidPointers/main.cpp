#include <iostream>

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    void* ptr; // Khai báo con trỏ void

    // Trỏ tới int
    ptr = &a;
    std::cout << "Integer value: " << *(static_cast<int*>(ptr)) << std::endl;

    // Trỏ tới float
    ptr = &b;
    std::cout << "Float value: " << *(static_cast<float*>(ptr)) << std::endl;

    // Trỏ tới char
    ptr = &c;
    std::cout << "Char value: " << *(static_cast<char*>(ptr)) << std::endl;

    return 0;
}
