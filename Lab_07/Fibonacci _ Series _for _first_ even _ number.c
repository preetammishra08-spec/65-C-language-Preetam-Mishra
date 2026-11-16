#include <stdio.h>

int main()
{
    int n, i;
    int x = 0, y = 1, z;
    int sum = 0;

    printf(" My name is Preetam  Mishra solving questions no 19 ");

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", x);

        if(x % 2 == 0)
        {
            sum = sum + x;
        }

        z = x + y;
        x = y;
        y = z;
    }

    printf("\nSum of even terms = %d", sum);

    return 0;
}
