#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  pattern printing.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Accept number from user and display below patterns.
//                          A   B   C   D   E  
//                         
//  Date           :  9/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Pattern(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= iNo ; iCnt++, ch++)
    {
        printf("%c\t", ch);
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

