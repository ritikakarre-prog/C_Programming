
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Reversing the string.
//  Input          :  Character, character, Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept string from user reverse that string in place.
//                     Input :  "abcd"                                 
//                     Output:   dcba                     
// 
//  Date           :  10/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void StrRevX(char *str)
{
    int iLength = 0;

    while(str[iLength] != '\0')
    {
        iLength++;
    }

    int itr1 = 0;
    int itr2 = iLength - 1;

    char revstr[20];

    while(itr2 >= 0)
    {
        revstr[itr1] = str[itr2];

        itr2--;
        itr1++;
    }

    revstr[iLength] = '\0';

    for(itr1 = 0; itr1 <= iLength; itr1++)
    {
        str[itr1] = revstr[itr1];
    }
}

int main()
{
    char arr[20];

    printf("Enter string : ");
    scanf("%19s", arr);

    StrRevX(arr);

    printf("Modified string is : %s\n", arr);

    return EXIT_SUCCESS;
}
