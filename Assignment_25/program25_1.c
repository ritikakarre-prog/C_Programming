#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Check it is alphabet or not.
//  Input          :  Character,Bool
//  Output         :  Bool
//  Descreption    :  Accept character from user and check whether it is alphabet or not(A-Z  a-z).
// 
//  Date           :  11/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#define true 1
#define false 0
typedef int Bool;

Bool ChkAlpha(char ch)
{
   if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') )
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

   bRet = ChkAlpha(cValue);

   if(bRet == true)
   {
      printf("It is Character");
   }
   else
   {
      printf("It is not a Character");
   }

   return EXIT_SUCCESS;
}

