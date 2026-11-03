#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display factors.
//  Input          :  Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept number from user and display its factors in decreasing order.
//  Date           :  3/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int FactRev(int iNo)
{
  int iCount = 0;
  int iFact = 1;

    for(iCount = iNo / 2; iCount >= 1; iCount--)
    {
        if((iNo % iCount)==0)
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

    FactRev(iValue);

    return EXIT_SUCCESS;
}

