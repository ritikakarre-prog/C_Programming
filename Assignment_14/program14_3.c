#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display Non-factors.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which accept number from user and display its all non factors.
//  Date           :  3/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void NonFact(int iNo)
{
  int iCount = 0;
  int iFact = 1;

    for(iCount = 1; iCount <=  iNo; iCount++)
    {
        if((iNo % iCount) !=0)
        {
          iFact = iFact * iCount;
          printf("%d \t",iCount);
        }
    }
   
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    NonFact(iValue);

    return EXIT_SUCCESS;
}

