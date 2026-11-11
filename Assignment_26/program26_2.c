#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display Characters.
//  Input          :  Character
//  Output         :  Void
//  Descreption    :  Accept character from user. if character is small display its corresponding capital character, and if it small then display its
//                    corresponding capital. in other cases display as it is.
// 
//  Date           :  11/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void Display(char ch)
{

   if(ch >='a' && ch <= 'z')
   {
        ch = ch - 32;
   }
   else if(ch >='A' && ch <= 'Z')
   {
        ch = ch + 32;
   }

   printf("%c\n", ch);
}

int main()
{
   char cValue = '\0';

   printf("Enter the character: ");
   scanf(" %c", &cValue);

   Display(cValue);

   return EXIT_SUCCESS;
}

