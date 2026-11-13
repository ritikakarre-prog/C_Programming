#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display diff. between small and capital character.
//  Input          :  Character,Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept string from user and return difference between frequency of small characters and frequency of capital 
//                    character .
//                     Input :  "MarvellouS"                                                                                
//                     Output:  6       (8-2)                              
// 
//  Date           :  12/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



int Difference(char *str)
{
     int iCntSmall = 0;
     int iCntCapital = 0;
    
     if(str == NULL)
     {
         return -1;
     }

     while( *str != '\0')
     {
        if(*str >= 'a' && *str <= 'z')
        {
            iCntSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCntCapital++;
        }
        str++;

     }
     return iCntSmall - iCntCapital;
  
}

int main()
{
   char arr[20];
   int iRet = 0;

   printf("Enter string : ");
   scanf("%[^\n]s", arr);

   iRet = Difference(arr);

   printf("%d", iRet);

   return EXIT_SUCCESS;
}

