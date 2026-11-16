#include <stdio.h>

union Employee
{
    int id;
    float salary;
};

int main()
{
    union Employee e;

    printf(" My name is Preetam Mishra solved program no 25\n ");

    e.id = 205;
    printf("Employee ID = %d\n", e.id);

    e.salary = 18500.75;
    printf("Employee Salary = %.2f\n", e.salary);

    return 0;
}
