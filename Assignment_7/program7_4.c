#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print Odd numbers.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which accepts N from user and print all odd number up to N.
//  Date           :  30/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iDigit = 0;

    for(iDigit = 1; iDigit <= iNo ; iDigit++)
    {
        if((iDigit % 2) != 0)
        {
          printf("%d \t",iDigit); 
        }  
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}

