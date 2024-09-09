#include <iostream>
using namespace std;

enum week
{
    Mon,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};

int main()
{
    // Iterate through enum values using a traditional for loop
    for (int x = Mon; x <= Sun; ++x)
    {
        std::cout << x << ' ';
    }

    std::cout << std::endl;

    return 0;
}
