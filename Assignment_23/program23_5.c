#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Counts white spaces.
//  Input          :  Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept string from user and count number of white spaces.
//                     Input :  "marve89llous121"
//                     Output:   89121  
// 
//  Date           :  10/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int CountWhite(char *str)
{
  
    int iCount = 0;

    while( *str != '\0')
    {
        if( *str == ' ')
        {
            iCount++;
        
        }
        str++;     
    }
    return iCount++;

}

int main()
{
   char arr[20];
   int iRet = 0;

   printf("Enter string : ");
   scanf("%[^\n]s", arr);

   iRet = CountWhite(arr);

   printf("%d", iRet);

   return EXIT_SUCCESS;
}

