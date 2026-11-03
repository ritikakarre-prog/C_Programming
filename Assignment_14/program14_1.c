#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display multiplication of factors.
//  Input          :  Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept number from user and display its multiplication of factors.
//  Date           :  3/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int MultFact(int iNo)
{
  int iCount = 0;
  int iFact = 1;

    for(iCount = 1; iCount <= iNo / 2; iCount++)
    {
        if((iNo % iCount)==0)
        {
          iFact = iFact * iCount;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

