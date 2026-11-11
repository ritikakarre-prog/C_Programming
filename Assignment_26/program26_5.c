#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display ASCII values in octal,Decimal and Hxadecimal.
//  Input          :  Character
//  Output         :  Void
//  Descreption    :  Accept character from user and display its ASCII value in decimal, Octal, and Hexadecimal format.
// 
//  Date           :  11/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Display(char ch)
{
   if(ch >= 'A' && ch <= 'z')
   {
      printf("%d\n", ch);
      printf("%#o\n", ch);
      printf("%#x\n", ch);
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

