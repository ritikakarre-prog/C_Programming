#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Calculate percentage.
//  Input          :  Integer, integer
//  Output         :  Float
//  Descreption    :  Write a program which accept total marks and obtained marks from user and calculate percentage. 
//  Date           :  3/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


float Percentage(float iNo1, float iNo2)
{
    float fPercent = 0.0;

    fPercent =(iNo2 / iNo1) * 100;
    return fPercent;

}

int main()
{
    int iValue1 = 0,  iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks : ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %.2f",fRet);

    return EXIT_SUCCESS;
}

