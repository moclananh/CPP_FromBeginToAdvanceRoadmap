// C program to print details of employee using structure

#include <stdio.h>
#include <string.h>

// Structure to represent Employee
struct Employee
{
    char name[50];
    char desig[50];
};

// Function to print Employee details
void printEmpDetails(const struct Employee *emp)
{
    printf("Name: %s\n", emp->name);
    printf("Designation: %s\n", emp->desig);
}

int main()
{
    // Creating an instance of Employee
    struct Employee emp1;
    strcpy(emp1.name, "geek");
    strcpy(emp1.desig, "Software Engineer");

    printEmpDetails(&emp1);

    return 0;
}
