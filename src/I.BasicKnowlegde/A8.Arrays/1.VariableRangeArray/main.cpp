// C program to demonstrate variable length array
#include <stdio.h>

// function to initialize array
void initialize(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = i + 1;
    }
}

// function to print an array
void printArray(int size)
{
    // variable length array
    int arr[size];
    initialize(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// driver code
int main()
{
    int n = 5;
    printArray(n);

    return 0;
}
