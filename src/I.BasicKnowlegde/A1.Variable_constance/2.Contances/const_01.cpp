#include <stdio.h>

int main()
{

    // defining integer constant using const keyword (it mean readonly in c#)
    const int int_const = 25;
    // int_const = 30; //cannot assign for const variable

    // defining character constant using const keyword
    const char char_const = 'A';

    // defining float constant using const keyword
    const float float_const = 15.66;

    printf("Printing value of Integer Constant: %d\n",
           int_const);
    printf("Printing value of Character Constant: %c\n",
           char_const);
    printf("Printing value of Float Constant: %f",
           float_const);

    return 0;
}