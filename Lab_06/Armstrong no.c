#include <stdio.h>

int main()
{
    int n, t, d, count = 0;
    long long sum = 0, p;
   printf ( " My name is Preetam Mishra solving questions no 17 ");
    
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Not Armstrong");
        return 0;
    }

    t = n;

    do {
        count++;
        t /= 10;
    } while (t != 0);

    t = n;

    do {
        d = t % 10;
        p = 1;

        for (int i = 0; i < count; i++)
            p *= d;

        sum += p;
        t /= 10;

    } while (t != 0);

    if (sum == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
