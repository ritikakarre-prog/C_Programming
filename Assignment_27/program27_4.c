#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Checks whether it is vowel or not.
//  Input          :  Character,Bool
//  Output         :  Bool
//  Descreption    :  Write a program which accept string from user and check whether it contains vowels in it or not.
//                     Input :  "Marvellous"                   Input :  "xyz"                                                                                
//                     Output:  true                           output:  false   
//                                                                     
//  Date           :  12/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#define true 1
#define false 0
typedef int Bool;

Bool ChkVowel(char *str)
{

     while( *str != '\0')
     {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            return true;
        }
        str++;
     }
     return false;
    
}

int main()
{
   char arr[20];
   Bool bRet = false;

   printf("Enter string : ");
   scanf("%[^\n]s", arr);

   bRet = ChkVowel(arr);

   if(bRet == true)
   {
        printf("Contains Vowels");
   }
   else 
   {
        printf("There is no Vowels");
   }


   return EXIT_SUCCESS;
}

