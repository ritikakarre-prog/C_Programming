#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Checks whether the character is present in string or not.
//  Input          :  Character, character, bool
//  Output         :  Bool
//  Descreption    :  Write a program which accept string from user and accept one character.Check whether that character is present in string or not.
//                     Input :  "Marvellous Multi OS"                   Input :  "Marvellous Multi OS"
//                                e                                                  w
//                     Output:   ture                                    Output:   false 
// 
//  Date           :  10/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int Bool;
#define true 1
#define false 0

Bool ChkChar(char *str, char ch)
{
     
    if( ch == 'e')
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
   char arr[20];
   char cValue = '0';
   Bool bRet = false;

   printf("Enter string : ");
   scanf("%[^\n]s", arr);

   printf("Enter the character: ");
   scanf(" %c", &cValue);

   bRet = ChkChar(arr, cValue);

   if(bRet == true)
   {
      printf("Character found");
   }
   else 
   {
      printf("Character not found");
   }

   return EXIT_SUCCESS;
}

