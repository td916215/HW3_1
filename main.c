#include <stdio.h>
#include <stdlib.h>

void gradeCheck(float);

int main()
{
    float yourGrade;

    // prompt user for grade number
    printf("Enter your score: ");
    scanf("%f", &yourGrade);

    gradeCheck(yourGrade);

    return 0;
}

void gradeCheck(float enteredValue) // give letter grade based on number entered
{
    if (enteredValue >= 0 && enteredValue <= 59.9)
    {
        printf("You got an F");
    }
    else if (enteredValue >= 60 && enteredValue <= 62.9)
    {
        printf("You got a D-");
    }
    else if (enteredValue >= 63 && enteredValue <= 66.9)
    {
        printf("You got a D");
    }
    else if (enteredValue >= 67 && enteredValue <= 69.9)
    {
        printf("You got a D+");
    }
    else if (enteredValue >= 70 && enteredValue <= 72.9)
    {
        printf("You got a C-");
    }
    else if (enteredValue >= 73 && enteredValue <= 76.9)
    {
        printf("You got a C");
    }
    else if (enteredValue >= 77 && enteredValue <= 79.9)
    {
        printf("You got a C+");
    }
    else if (enteredValue >= 80 && enteredValue <= 82.9)
    {
        printf("You got a B-");
    }
    else if (enteredValue >= 83 && enteredValue <= 86.9)
    {
        printf("You got a B");
    }
    else if (enteredValue >= 87 && enteredValue <= 89.9)
    {
        printf("You got a B+");
    }
    else if (enteredValue >= 90 && enteredValue <= 93.9)
    {
        printf("You got an A-");
    }
    else if (enteredValue >= 94 && enteredValue <= 100)
    {
        printf("You got an A");
    }
}
