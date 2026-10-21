#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print th even numbers.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which accept one number from user and print that number of even numbers on screen.
//  Date           :  19/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

void printEven(int iNo)
{ 
    if(iNo <= 0)  
    {
        return;
    }
    int count = 0;
    
    for(int i=1; count != iNo ;i++)
    { 
        if((i % 2)==0)
        {
         printf("%d\t",i);
         count++;
        } 
    }
}    

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    printEven(iValue);

    return 0;
}