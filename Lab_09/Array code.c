#include <stdio.h>

int main()
{
    int a[10], n, i;
    int large, small;

    printf("My name is Preetam Mishra solved Program 23\n ");
    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array numbers:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    large = a[0];
    small = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > large)
            large = a[i];

        if(a[i] < small)
            small = a[i];
    }

    printf("Maximum number = %d\n", large);
    printf("Minimum number = %d", small);

    return 0;
}
