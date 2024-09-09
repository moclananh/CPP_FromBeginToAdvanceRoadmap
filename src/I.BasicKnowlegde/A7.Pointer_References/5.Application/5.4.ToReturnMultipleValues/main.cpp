// C program to return multiple values from a function

#include <stdio.h>

// Function to calculate sum and product of two numbers
void calcSumAndProduct(int x, int y, int *sum, int *prod)
{
    *sum = x + y;
    *prod = x * y;
}

int main()
{
    int x = 5;
    int y = 7;
    int sum, prod;
    // calling the function to calculate sum and product
    calcSumAndProduct(x, y, &sum, &prod);

    // printing the sum and product returned from function
    printf("Sum is: %d \nProduct is: %d\n", sum, prod);

    return 0;
}
