#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display Diff of factors.
//  Input          :  Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept number from user and return difference between summation of all its factors and non factors.
//  Date           :  3/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int FactDiff(int iNo)
{
  int iCount = 0;
  int iFactDiff= 0;
  int iSumFact = 0, iSumNonFact = 0;

    for(iCount = 1; iCount <  iNo; iCount++)
    {
        if((iNo % iCount) ==0 )
        {
          iSumFact = iSumFact + iCount;
        }
        else
        {
          iSumNonFact = iSumNonFact + iCount;
        }

        iFactDiff = iSumFact - iSumNonFact;

    }
    return iFactDiff;
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

