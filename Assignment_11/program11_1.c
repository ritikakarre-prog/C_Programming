#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display range.
//  Input          :  Integer, Integer
//  Output         :  Void
//  Descreption    :  Write a program which accept range from user and display all numbers in between that range.
//  Date           :  1/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart, int iEnd)
{
    int iCount = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
    }

    for(iCount = iStart; iCount <= iEnd; iCount++)
    {
        printf("%d \t",iCount);
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);


    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}

