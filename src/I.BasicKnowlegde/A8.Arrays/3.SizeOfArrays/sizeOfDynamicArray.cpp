#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // int *arr = new int[20]; it's same bellow
    int *arr = (int *)malloc(sizeof(int) * 20);
    return 0;
}
