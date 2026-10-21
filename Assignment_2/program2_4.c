#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display first number in second, number of times.
//  Input          :  Integer, Integer
//  Output         :  Void
//  Descreption    :  Accept one number from user and display first number in second number of times.
//  Date           :  19/10/2026
//  Author         :  Rithika Prabhakar Karre
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter number: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}