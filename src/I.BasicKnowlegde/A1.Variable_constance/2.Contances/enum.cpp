// C program to illustrate the use of enums to declare
// constant
#include <stdio.h>

// In C internally the default
// type of 'var' is int
enum VARS
{
    var = 42
};

// where mytype = int, char, long etc.
// but it can't be float, double or
// user defined data type.
int main()
{
    printf("The value of var: %d", var);

    return 0;
}
