// C program to demonstrate dangling pointer when variable
// goes put of scope
#include <stdio.h>
#include <stdlib.h>

// driver code
int main()
{
    int *ptr;
    // creating a block
    {
        int a = 10;
        ptr = &a;
    }

    // ptr here becomes dangling pointer
    printf("%d", *ptr);

    return 0;
}
