#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display sum of Non-factors.
//  Input          :  Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept number from user and return summation of all its non factors.
//  Date           :  3/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int SumNonFact(int iNo)
{
  int iCount = 0;
  int iSumFact = 0;

    for(iCount = 1; iCount <=  iNo; iCount++)
    {
        if((iNo % iCount) !=0)
        {
          iSumFact = iSumFact + iCount;
        }
    }
    return iSumFact;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

