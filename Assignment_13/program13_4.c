#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display multiplication of digits.
//  Input          :  Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept number from user and return multiplication of all digits.
//  Date           :  2/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int MultDigits(int iNo)
{
    int iCount = 0;
    int iDigit = 0;
    int iMult = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
           iMult = iMult * iDigit;
        }
        iNo = iNo / 10;

       
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}

