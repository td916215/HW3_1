#include <stdio.h>
#include <stdlib.h>
#include "CheckGrade.h"

int main()
{
    float yourGrade;

    // prompt user for grade number
    printf("Enter your score: ");
    scanf("%f", &yourGrade);

    gradeCheck(yourGrade);

    return 0;
}
