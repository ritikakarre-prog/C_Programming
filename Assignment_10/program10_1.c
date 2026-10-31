#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Calculate Area.
//  Input          :  Float
//  Output         :  Float
//  Descreption    :  Write a program which accept radius of circle from user and calculate its area. consider value of PI as 3.14 
//                       (Area = PI * Radius * Radius)
//  Date           :  31/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

float CircleArea(float fRadius)
{
   float fArea = 0;

      fArea = 3.14 * fRadius * fRadius;
      return fArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %f", dRet);

    return EXIT_SUCCESS;
}

