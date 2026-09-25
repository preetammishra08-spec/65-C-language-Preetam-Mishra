#include <stdio.h>

int main()
{
    int a = 20, b = 10;

    printf("(a < b) && (a != b) = %d\n", (a < b) && (a != b));

    printf("(a > b) || (a != b) = %d\n", (a > b) || (a != b));

    printf("!(a < b) = %d\n", !(a < b));

    return 0;
}
