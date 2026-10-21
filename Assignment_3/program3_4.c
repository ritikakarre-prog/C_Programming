#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  converting case of character .
//  Input          :  Character
//  Output         :  Void
//  Descreption    :  Accept one character from user and convert case of that character.
//  Date           :  19/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char cValue)
{ 
    
    if(cValue >= 'a' && cValue <= 'z' )  
    {
        printf("%c", cValue  - 32);
    }
    else if(cValue >= 'A' && cValue <= 'Z' )
    {
        printf("%c", cValue + 32);
    }

}    

int main()
{
    char cValue = 0;

    printf("Enter character\n");

    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}