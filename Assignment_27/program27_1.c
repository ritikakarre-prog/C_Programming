#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Counts number of capital character.
//  Input          :  Character,Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept string from user and count number of capital character.
//                     Input :  "Marvellous Multi OS"                                                                                
//                     Output:   4                                   
// 
//  Date           :  12/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



int CountCapital(char *str)
{
     int iCnt = 0;

     if(str == NULL)
     {
         return -1;
     }

     while( *str != '\0')
     {
        if(*str >= 'A' && *str <= 'Z')
        {
              iCnt++;
        }
         str++;
     }
     return iCnt;
   
}

int main()
{
   char arr[20];
   int iRet = 0;

   printf("Enter string : ");
   scanf("%[^\n]s", arr);

   iRet = CountCapital(arr);

   printf("%d", iRet);

   return EXIT_SUCCESS;
}

