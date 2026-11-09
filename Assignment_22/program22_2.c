#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  pattern printing.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Accept number from user and display below patterns.
//                          5     #     4     #     3     #     2     #     1     
//                         
//  Date           :  9/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t", iCnt);
    }  

}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}

