#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Checks the number is positive, negative or zero .
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Accept an integer from the user and determines whether the entered number is positive , negative or zero.
//  Date           :  21/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

void CheckNumber(int iValue)
{
     if(iValue > 0)
     {
          printf("The number is positive");
     }
     else if(iValue < 0)
     {
          printf("The number is negative");
     }
     else
     {
          printf("The number is zero");
     }

}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;

}