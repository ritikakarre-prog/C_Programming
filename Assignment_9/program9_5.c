#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print diff. betn even and odd factorial.
//  Input          :  Integer
//  Output         :  Integer
//  Descreption    :  Write a program which returns difference between even factorial and odd factorial of given number.
//  Date           :  31/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
   int iCount = 0;
   int iEvenFact = 1, iOddFact = 1;
   int iDiff = 0;
   
   if(iNo < 0)
   {
    iNo = -iNo;
   }

   for(iCount = 1; iCount <= iNo; iCount++)
   {
        if((iCount % 2) == 0)
        {
            iEvenFact = iEvenFact * iCount;
        }  

        if((iCount % 2) != 0)
        {
            iOddFact = iOddFact * iCount;
        }  
       
   }  
    iDiff = iEvenFact - iOddFact;  
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);

    return EXIT_SUCCESS;
}

