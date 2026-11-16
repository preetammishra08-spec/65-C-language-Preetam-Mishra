#include <stdio.h>

struct Student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct Student s[3] = {
        {4, "Virat", 78.5},
        {5, "Suresh", 82.0},
        {6, "Rohit", 91.5}
    };

    int i;

    printf("My name is Preetam Mishra solved program no 24 ");

    for(i = 0; i < 3; i++)
    {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}

