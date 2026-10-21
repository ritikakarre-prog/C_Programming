#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print stars (*).
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Accept one number from user and print that number of * on screen.
//  Date           :  19/10/2026
//  Author         :  Rithika Prabhakar Karre
///////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    
    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}