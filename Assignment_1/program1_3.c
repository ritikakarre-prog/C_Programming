#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print 5 to 1 numbers.
//  Input          :  Integer
//  Output         :  Integer
//  Descreption    :  Printing 5 to 1 numbers on screen
//  Date           :  19/10/2026
//  Author         :  Rithika Prabhakar Karre
/////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;

    i=5;
    while(i>=1)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();
    return 0;
}