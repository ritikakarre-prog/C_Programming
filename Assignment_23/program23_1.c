#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Prints string in lower case.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which accept string from user and convert it into lower case.
//                     Input :  "Marvellous Multi OS"
//                     Output:   marvellous multi os   
// 
//  Date           :  10/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Strlwrx(char *str)
{
  
    while( *str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;    
    }

}

int main()
{
   char arr[20];

   printf("Enter string : ");
   scanf("%[^\n]s", arr);

   Strlwrx(arr);

   printf("Modified string is %s", arr);

   return EXIT_SUCCESS;
}

