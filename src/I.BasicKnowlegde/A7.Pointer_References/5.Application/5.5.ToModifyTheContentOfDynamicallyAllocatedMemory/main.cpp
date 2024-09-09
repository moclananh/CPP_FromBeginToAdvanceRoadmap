// C program to modify dynamically allocated memory

#include <stdio.h>
#include <stdlib.h>

// Function to allocate memory for an integer and set its
// value
void dynamicMemoryAllocation(int **myptr)
{
    *myptr = new int;
    if (*myptr != NULL)
    {
        **myptr = 20;
    }
}

int main()
{
    int *val;

    // calling the function to allocate memory dynamically
    // and set the value
    dynamicMemoryAllocation(&val);
    printf("Dynamic value set is: %d\n", *val);
    // free up the allocated memory
    free(val);
    return 0;
}
