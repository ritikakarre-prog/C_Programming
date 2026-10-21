#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print th even numbers.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which accept number from user and print even factors of that number.
//  Date           :  19/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{   
    int i=0;

    if(iNo <= 0)  
    {
        iNo = -iNo;
    }

    for(int i=1; i <= iNo/2; i++)
    { 
        if((i % 2)==0)
        {
            printf("%d\t",i);
        } 
    }
           
}    

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}