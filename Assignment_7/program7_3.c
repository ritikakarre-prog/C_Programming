#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print numbers.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which accept number from user and print its number line.
//  Date           :  30/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iDigit = 0;

    for(iDigit = -iNo; iDigit <= iNo ; iDigit++)
    {
          printf("%d \t",iDigit); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}

