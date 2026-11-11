#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Check it is digit or not.
//  Input          :  Character,Bool
//  Output         :  Bool
//  Descreption    :  Accept character from user and check whether it is digit or not(0-9).
// 
//  Date           :  11/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#define true 1
#define false 0
typedef int Bool;

Bool ChkDigit(char ch)
{
   if(ch >= '0' && ch <= '9')
   {
        return true;
   }
   else
   {
        return false;
   }
}

int main()
{
   char cValue = '\0';
   Bool bRet = false;

   printf("Enter the character : ");
   scanf(" %c", &cValue);

   bRet = ChkDigit(cValue);

   if(bRet == true)
   {
      printf("It is Digit");
   }
   else
   {
      printf("It is not a Digit");
   }

   return EXIT_SUCCESS;
}

