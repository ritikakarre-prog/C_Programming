#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Check character is upper or lowercase and digit, special character.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Accept a single character and determine whether it is an uppercase alphabet,lowercase alphabet, digit, or special character. Use character comparisons without using library character classification functions.
//  Date           :  21/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

void  CheckCharacterType(char cValue)
{
   if(cValue >= 65  && cValue <= 90)
   {
       printf("The character is Uppercase\n");
   }
   else if(cValue >= 97  && cValue <= 122)
   {
       printf("The character is Lowercase\n");
   }
   else if(cValue >= 48 && cValue <= 57)
   {
       printf("It is digit\n");
   }
   else
   {
        printf("It is special character\n");
   }
}

int main()
{
    int cValue = '\0';

    printf("Enter character : ");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;

}