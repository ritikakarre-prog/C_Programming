#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  print multiplication.
//  Input          :  Integer, integer, integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept three numbers and print its multiplication.
//  Date           :  3/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;

    if (iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
      return 0;
    }

    if(iNo1 != 0)
    {
      iMult = iMult * iNo1;
    }
    if (iNo2 != 0)
    {
      iMult = iMult * iNo2;
    }
    if(iNo3 != 0)
    {
      iMult = iMult * iNo3;
    }
    return iMult;
}

int main()
{
    int iValue1 = 0,  iValue2 = 0,  iValue3 = 0;
    int iRet = 0;

    printf("Please enter first number : ");
    scanf("%d",&iValue1);

    printf("Please enter second number : ");
    scanf("%d",&iValue2);
    
    printf("Please enter third number : ");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of three number is : %d",iRet);

    return EXIT_SUCCESS;
}

