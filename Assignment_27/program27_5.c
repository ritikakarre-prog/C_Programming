#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display reverse character.
//  Input          :  Character
//  Output         :  Void
//  Descreption    :  Write a program which accept string from user and display it in reverse order.
//                     Input :  "Marvellous"                                                                                
//                     Output:   SuollevraM                            
// 
//  Date           :  12/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void Reverse(char *str)
{
   int iLength = 0;

   while(str[iLength] != '\0')
   {
         iLength++; 
   }  

   int iIte1 = 0;
   int iIte2 = iLength - 1;
   char revstr[20];

   while(iIte2 >= 0)
   {
       revstr[iIte1] = str[iIte2];

       iIte2--;
       iIte1++;
   }

   revstr[iLength] = '\0';

   for(iIte1 = 0; iIte1 < iLength; iIte1++)
   {
      str[iIte1] = revstr[iIte1];
   }
}

int main()
{
   char arr[20];

   printf("Enter string : ");
   scanf("%[^\n]s", arr);

   Reverse(arr);

   printf("Reverse string is : %s\n", arr);

   return EXIT_SUCCESS;
}

