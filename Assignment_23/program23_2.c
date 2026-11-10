#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Prints string in upper case.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which accept string from user and convert it into upper case.
//                     Input :  "Marvellous Multi OS"
//                     Output:   MARVELLOUS MULTI OS   
// 
//  Date           :  10/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Struprx(char *str)
{
  
    while( *str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;    
    }

}

int main()
{
   char arr[20];

   printf("Enter string : ");
   scanf("%[^\n]s", arr);

   Struprx(arr);

   printf("Modified string is %s", arr);

   return EXIT_SUCCESS;
}

