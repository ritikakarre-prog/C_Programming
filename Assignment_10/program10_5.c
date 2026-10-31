#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  convert square feet to square metre.
//  Input          :  Integer
//  Output         :  Double
//  Descreption    :  Write a program which accept area in square feet and convert it into square metre.
//                       (1 square feet = 0.0929 square metre)
//  Date           :  31/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double SquareMetre(int iValue)
{
    double dSqMetre = 0.0;

    dSqMetre = iValue * 0.0929;
    return dSqMetre;

}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iValue);

    dRet = SquareMetre(iValue);

    printf("Area in square metre is %lf", dRet);

    return EXIT_SUCCESS;
}

