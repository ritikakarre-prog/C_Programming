#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print even factorials.
//  Input          :  Integer
//  Output         :  Integer
//  Descreption    :  Write a program to find even factorial of given number.
//  Date           :  31/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
   int iCount = 0;
   int iFact = 1;
 
   if(iNo < 0)
   {
    iNo = -iNo;
   }
   
   for(iCount = 1; iCount <= iNo; iCount++)
   {
        if((iCount % 2) == 0)
        {
            iFact = iFact * iCount;
        }  
   }
   return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d", iRet);

    return EXIT_SUCCESS;
}

