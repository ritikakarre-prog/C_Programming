#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Prints table.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which accept number from user and display its table in reverse order.
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
   for(iDigit = 10; iDigit >= 1; iDigit--)
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

