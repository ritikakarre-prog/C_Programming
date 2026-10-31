#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  convert fahrenheit to celsius.
//  Input          :  Float
//  Output         :  Double
//  Descreption    :  Write a program which accept temperature in fahrenheit and convert it into celsius.
//                       (1 celsius = (fahrenheit - 32) * (5/9))
//  Date           :  31/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double FhToCs(float fTemp)
{
    double dCels= 0;

    dCels =(fTemp - 32) * (5.0 / 9.0);
    return dCels;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);

    printf(" Temperature in celsius is %lf", dRet);

    return EXIT_SUCCESS;
}

