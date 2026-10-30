#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Prints table.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which accepts number from user and display its table.
//  Date           :  30/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
   if(iNo < 0) 
   {
    iNo = -iNo;
   }

   int iDigit = 0;
   for(iDigit = 1; iDigit <= 10; iDigit++)
   {
       printf("%d \t", iNo * iDigit);
   }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}

