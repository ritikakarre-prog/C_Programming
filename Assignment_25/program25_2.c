#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Check it is capital alphabet or not.
//  Input          :  Character,Bool
//  Output         :  Bool
//  Descreption    :  Accept character from user and check whether it is Capital or not(A-Z).
// 
//  Date           :  11/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#define true 1
#define false 0
typedef int Bool;

Bool ChkCapital(char ch)
{
   if(ch >= 'A' && ch <= 'Z')
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

   bRet = ChkCapital(cValue);

   if(bRet == true)
   {
      printf("It is Capital Character");
   }
   else
   {
      printf("It is not a Capital Character");
   }

   return EXIT_SUCCESS;
}

