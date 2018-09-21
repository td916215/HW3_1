#include <stdio.h>
#include <stdlib.h>

int main()
{
    float yourGrade;

    printf("Enter your score: ");
    scanf("%f", &yourGrade);

    if (yourGrade >= 0 && yourGrade <= 59.9)
    {
        printf("You got an F");
    }
    else if (yourGrade >= 60 && yourGrade <= 62.9)
    {
        printf("You got a D-");
    }
    else if (yourGrade >= 63 && yourGrade <= 66.9)
    {
        printf("You got a D");
    }
    else if (yourGrade >= 67 && yourGrade <= 69.9)
    {
        printf("You got a D+");
    }
    else if (yourGrade >= 70 && yourGrade <= 72.9)
    {
        printf("You got a C-");
    }
    else if (yourGrade >= 73 && yourGrade <= 76.9)
    {
        printf("You got a C");
    }
    else if (yourGrade >= 77 && yourGrade <= 79.9)
    {
        printf("You got a C+");
    }
    else if (yourGrade >= 80 && yourGrade <= 82.9)
    {
        printf("You got a B-");
    }
    else if (yourGrade >= 83 && yourGrade <= 86.9)
    {
        printf("You got a B");
    }
    else if (yourGrade >= 87 && yourGrade <= 89.9)
    {
        printf("You got a B+");
    }
    else if (yourGrade >= 90 && yourGrade <= 93.9)
    {
        printf("You got an A-");
    }
    else if (yourGrade >= 94 && yourGrade <= 100)
    {
        printf("You got an A");
    }

    return 0;
}
