#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print stars (*).
//  Input          :  Integer
//  Output         :  void
//  Descreption    :  Accept one number from user and print that number of * on screen.
//  Date           :  19/10/2026
//  Author         :  Rithika Prabhakar Karre
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    
    iCnt=1;
    while( iCnt <= iNo)
    {
        printf("*");
        iCnt++;
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