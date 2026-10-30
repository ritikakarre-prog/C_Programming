#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print numbers.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which accepts number from user and if number is less than 50 then print small, if it is greater than 50 and less 
//                    than 100 then print medium, if it is greater than 100 then print large.
//  Date           :  30/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
   if(iNo < 50)
   {
       printf("The number is Small");
   }
   else if(iNo > 50 & iNo < 100)
   {
       printf("The number is Medium");
   }
   else
   {
       printf("The number is Large");
   }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}

