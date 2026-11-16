#include <stdio.h>

int main()
{
    char ch;
 printf ("My name is Preetam Mishra solving questions no 21 ");
  
 printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel");
            break;

        default:
            printf("Consonant");
    }

    return 0;
}
