// C++ program to illustrate the function template argument
// deduction
#include <iostream>
using namespace std;

// defining function template
template <typename t>
t multiply(t first, t second)
{
    return first * second;
}

// driver code
int main()
{
    auto result = multiply(10, 20); // auto datatype is same to var in c#
    std::cout << "Multiplication OF 10 and 20: " << result
              << std::endl;
    return 0;
}
