#include <iostream>

int main() {
    int a = 5, b = 10;

    auto captureAllByValue = [=]() {
        std::cout << "a: " << a << ", b: " << b << std::endl;
    };

    auto captureAllByReference = [&]() {
        std::cout << "a: " << a << ", b: " << b << std::endl;
    };

    captureAllByValue(); // Output: a: 5, b: 10
    captureAllByReference(); // Output: a: 5, b: 10

    a = 20;
    b = 30;

    captureAllByValue(); // Vẫn output: a: 5, b: 10
    captureAllByReference(); // Output: a: 20, b: 30

    return 0;
}
