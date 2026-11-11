#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display ASCII table.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which display ASCII table. table contains symbol, decimal, hexadecimal and octal representation of every member 
//                    from 0 to 255
// 
//  Date           :  11/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void DisplayASCII()
{
   int i = 0;

   printf("Symbol\tDecimal\tHexadecimal\tOctal\n");

   for(i= 0; i<= 255; i++)
   {
      printf("%c\t%d\t%x\t%o\n", i, i,  i,  i);
   }
}

int main()
{

   DisplayASCII();

   return EXIT_SUCCESS;
}

