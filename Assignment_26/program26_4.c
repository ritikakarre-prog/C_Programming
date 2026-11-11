#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  check it is symbol or not.
//  Input          :  Character, Bool
//  Output         :  Bool
//  Descreption    :  Accept character from user and check whether it is spcial symbol or not (!, @, #, $, %, ^, &,*).
// 
//  Date           :  11/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define true 1
#define false 0;
typedef int Bool;

Bool ChkSpecial(char ch)
{
   if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' ||ch == '&' || ch == '*')
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
   Bool bRet= false;

   printf("Enter the character: ");
   scanf(" %c", &cValue);

   bRet = ChkSpecial(cValue);

   if(bRet == true)
   {
      printf("It is special character");
   }
   else
   {
      printf("It is not special character");
   }

   return EXIT_SUCCESS;
}

