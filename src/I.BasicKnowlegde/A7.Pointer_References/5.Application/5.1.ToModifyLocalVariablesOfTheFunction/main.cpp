// C program to modify local variables of the caller
// function

#include <stdio.h>

// function to modify local var x
void fun(int *x)
{
    *x = 20;
}

int main()
{
    int x = 10;
    fun(&x);
    printf("New value of x is %d", x); // 20
    return 0;
}
