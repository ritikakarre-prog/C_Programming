#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display the toggled string.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which accept string from user and toggle the case.
//                     Input :  "Marvellous Multi OS"
//                     Output:   mARVELLOUS mULTI os   
// 
//  Date           :  10/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Strtogglex(char *str)
{
  
    while( *str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32; 
        }
        else if(*str >= 'A' && *str <= 'Z')
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

   Strtogglex(arr);

   printf("Modified string is %s", arr);

   return EXIT_SUCCESS;
}

