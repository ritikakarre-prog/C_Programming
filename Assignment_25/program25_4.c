#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Check it is small case character or not.
//  Input          :  Character,Bool
//  Output         :  Bool
//  Descreption    :  Accept character from user and check whether it is small case or not(a-z).
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
   if(ch >= 'a' && ch <= 'z')
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
      printf("It is Small case Character");
   }
   else
   {
      printf("It is not a Small case Character");
   }

   return EXIT_SUCCESS;
}

