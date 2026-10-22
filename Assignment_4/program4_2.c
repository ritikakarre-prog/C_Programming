#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Checks the number is positive, negative or zero .
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Accept an integer from the user and determines whether it is even or odd.An even number is completely divisible by 2.
//  Date           :  21/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iValue)
{
     if((iValue % 2) == 0)
     {
          printf("It is even number");
     }
     else
     {
          printf("It is odd number");
     }

}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;

}