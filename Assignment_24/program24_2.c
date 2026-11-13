#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Counts frequency of character.
//  Input          :  Character, character, Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept string from user and accept one character.Return frequency of that character.
//                     Input :  "Marvellous Multi OS"                   Input :  "Marvellous Multi OS"
//                                M                                                W
//                     Output:   2                                      Output:    0
// 
//  Date           :  10/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



int CountChar(char *str, char ch)
{
     int iCount = 0;

     while( *str != '\0')
     {
        if(*str == ch)
        {
            iCount++;
        }
          str++;
     }
     return iCount;
   
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

   iRet = CountChar(arr, cValue);

   printf("Character frequency is %d", iRet);

   return EXIT_SUCCESS;
}

