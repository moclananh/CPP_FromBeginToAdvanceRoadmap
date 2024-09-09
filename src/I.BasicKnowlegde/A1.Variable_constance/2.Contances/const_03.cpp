// C program to demonstrate the down qualification

#include <stdio.h>

int main(void)
{
    int i = 10;
    int const j = 20;

    /* ptr is pointing an integer object */
    int *ptr = &i;

    printf("*ptr: %d\n", *ptr);

    /* The below assignment is invalid in C++, results in
       error In C, the compiler *may* throw a warning, but
       casting is implicitly allowed */

    // ptr = &j;

    /* In C++, it is called 'down qualification'. The type
       of expression &j is "const int *" and the type of ptr
       is "int *". The assignment "ptr = &j" causes to
       implicitly remove const-ness from the expression &j.
       C++ being more type restrictive, will not allow
       implicit down qualification. However, C++ allows
       implicit up qualification. The reason being, const
       qualified identifiers are bound to be placed in
       read-only memory (but not always). If C++ allows
       above kind of assignment (ptr = &j), we can use 'ptr'
       to modify value of j which is in read-only memory.
       The consequences are implementation dependent, the
       program may fail
       at runtime. So strict type checking helps clean code.
     */

    printf("*ptr: %d\n", *ptr);

    return 0;
}