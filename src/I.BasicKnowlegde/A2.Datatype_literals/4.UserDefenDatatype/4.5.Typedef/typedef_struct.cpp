#include <iostream>

typedef struct
{
    int x;
    int y;
} Point;

int main()
{
    Point p = {10, 20}; // Point thực chất là cấu trúc chứa hai biến x và y
    std::cout << "x: " << p.x << ", y: " << p.y << std::endl;
    return 0;
}
