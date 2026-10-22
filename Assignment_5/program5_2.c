#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Checks the greatest number.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Accept a year and determine whether it is a leap year according to gregorian calenderrules. A year is leap year if it is divisible by 400, or divisible by 4 but not by 100.Consider years less than or equal to zero invalid.
//  Date           :  21/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if(((iYear % 4)== 0) && (iYear % 100) != 0 || ((iYear % 400) == 0))
    {
        printf("It is leap year");
    }
    else
    {
         printf("It is not leap year");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;

}