#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Return last occurance of character.
//  Input          :  Character, character, Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept string from user and accept one character.Return index of last occurance of that character.
//                     Input :  "Marvellous Multi OS"       Input :  "Marvellous Multi OS"        Input :  "Marvellous Multi OS"
//                                M                                        W                                  e
//                     Output:   11                         Output:    -1                         Output:   4
// 
//  Date           :  10/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
   int ilastIndex = -1;
   int iLength= 0;

   while(str[iLength] != '\0')
   {
      if(str[iLength] == ch)
      {
         ilastIndex = iLength;
      }
      iLength++;
   }
   return ilastIndex;
}

int main()
{
   char arr[20];
   char cValue;
   int iRet = 0;

   printf("Enter string : ");
   scanf("%[^\n]s", arr);

   printf("Enter the character: ");
   scanf(" %c", &cValue);

   iRet = FirstChar(arr, cValue);

   printf("Character location is %d", iRet);

   return EXIT_SUCCESS;
}

