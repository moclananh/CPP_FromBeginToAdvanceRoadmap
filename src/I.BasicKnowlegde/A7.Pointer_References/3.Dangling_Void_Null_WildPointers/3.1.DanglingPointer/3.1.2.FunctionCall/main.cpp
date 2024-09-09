// C program to demonstrate the pointer pointing to local
// variable becomes dangling when local variable is not
// static.
#include <stdio.h>

int *fun()
{
    // x is local variable and goes out of
    // scope after an execution of fun() is
    // over.
    int x = 5;

    return &x;
}

// Driver Code
int main()
{
    int *p = fun();
    fflush(stdin);

    // p points to something which is not
    // valid anymore
    printf("%d", *p); // output: 0
    return 0;
}
