#include <iostream>

// Định nghĩa functor
class Add
{
public:
    Add(int val) : value(val) {}

    // Toán tử gọi hàm
    int operator()(int x) const
    {
        return x + value;
    }

private:
    int value;
};

int main()
{
    Add addFive(5); // Tạo một functor với giá trị 5

    std::cout << "10 + 5 = " << addFive(10) << std::endl; // Sử dụng functor như một hàm

    return 0;
}
