#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print dollar into INR.
//  Input          :  Integer
//  Output         :  Integer
//  Descreption    :  Accept amount in US dollar and return its corresponding value in Indian Currency(Consider 1$ as 70 rupees).
//  Date           :  31/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
  int Dollar = 1;
  int INR = 0;
  for(Dollar = 1; Dollar <= iNo; Dollar++)
  {
       INR = Dollar * 70;  
  }
  return INR;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return EXIT_SUCCESS;
}

