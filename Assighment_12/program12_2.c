#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Checks digit contain zero or not.
//  Input          :  Integer
//  Output         :  Bool
//  Descreption    :  Write a program which accept number from user and check whether it contains 0 in it or not.
//  Date           :  2/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int Bool;

Bool ChkZero(int iNo)
{
   int iDigit = 0;

   while (iNo != 0)
   {
       iDigit = iNo % 10;

       iNo = iNo / 10;

       if (iDigit == 0)
       {
           return TRUE;
       }
   }
   return FALSE;
}

int main()
{
    int iValue = 0;
    Bool bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return EXIT_SUCCESS;
}

