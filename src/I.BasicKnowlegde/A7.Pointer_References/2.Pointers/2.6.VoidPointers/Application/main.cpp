#include <iostream>

void printValue(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        std::cout << "Integer: " << *(static_cast<int *>(ptr)) << std::endl;
        break;
    case 'f':
        std::cout << "Float: " << *(static_cast<float *>(ptr)) << std::endl;
        break;
    case 'c':
        std::cout << "Char: " << *(static_cast<char *>(ptr)) << std::endl;
        break;
    }
}

int main()
{
    int a = 10;
    float b = 5.5;
    char c = 'A';

    printValue(&a, 'i');
    printValue(&b, 'f');
    printValue(&c, 'c');

    return 0;
}
