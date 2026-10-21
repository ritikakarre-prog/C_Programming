#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print "Hello" otherwise "Demo".
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Accept one number from user if number less than 10 then print "Hello" otherwise print "Demo".
//  Date           :  19/10/2026
//  Author         :  Rithika Prabhakar Karre
/////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 10 )
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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