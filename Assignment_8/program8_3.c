#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print foctorial of number.
//  Input          :  Integer
//  Output         :  Integer
//  Descreption    :  Write a program to find factorial of given number.
//  Date           :  30/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
   int iFact = 1;
   int iCount = 0;
   
   if(iNo < 0)
   {
      iNo = -iNo;
   }
   
   for(iCount = 1; iCount <= iNo; iCount++)
   {
      iFact = iFact * iCount;
   }
   return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return EXIT_SUCCESS;
}

