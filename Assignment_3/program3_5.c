#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  converting case of character .
//  Input          :  Character
//  Output         :  bool
//  Descreption    :  Accept one character from user and check whether that character is vowel or not.
//  Date           :  19/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

bool CheckVowel(char bValue)
{ 
    
    if(bValue ==  97 || bValue == 101 || bValue ==  105 || bValue == 111 || bValue == 117 ||
       bValue ==  65 || bValue ==  69 || bValue ==  73  || bValue ==  79 || bValue == 85    )  
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}    

int main()
{
    char cValue = 0;
    bool bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not vowel");
    }


    return 0;
}