#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Checks the number is divisible by 5 .
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Accept an integer and determine whether it is divisible by 5 without leaving any remainder.
//  Date           :  21/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

void ChecksDivisibility(int iValue)
{
     if((iValue % 5) == 0)
     {
          printf("Divisible by 5");
     }
     else
     {
          printf("Not divisible by 5");
     }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    ChecksDivisibility(iValue);

    return EXIT_SUCCESS;

}