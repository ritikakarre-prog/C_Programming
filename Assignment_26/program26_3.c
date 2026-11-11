#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display Characters.
//  Input          :  Character
//  Output         :  Void
//  Descreption    :  Accept character from user. if character is capital then display all the characters from the input character till Z. if input character
//                    is small then print all the character in reverse order till a. In other cases return directly.
// 
//  Date           :  11/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void Display(char ch)
{
   char c = '\0';

   if(ch >='A' && ch <= 'Z')
   {
      for(c = ch; c <= 'Z'; c++)
      {
         printf("%c\t", c);
      }  
   }
   else if(ch >='a' && ch <= 'z')
   {
      for(c = ch; c >= 'a'; c--)
      {
         printf("%c\t", c);
      }  
   }
   else 
   {
      return;
   }

   
}

int main()
{
   char cValue = '\0';

   printf("Enter the character: ");
   scanf(" %c", &cValue);

   Display(cValue);

   return EXIT_SUCCESS;
}

