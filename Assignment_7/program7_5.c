#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print multiple of numbers.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which accepts N and print first 5 multiples of N.
//  Date           :  30/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iDigit = 0;

    for(iDigit = 1; iDigit <= 5; iDigit++)
    {
          printf("%d \t",iNo * iDigit); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}

