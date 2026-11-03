#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Checks the number is equal.
//  Input          :  Integer, integer
//  Output         :  Bool
//  Descreption    :  Write a program which accept two numbers from user and check whether number are equal or not.
//  Date           :  3/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int Bool;
#define false 0
#define true 1

Bool ChkEqual(int iNo1, int iNo2)
{
    
    if(iNo1 == iNo2 )
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue1 = 0,  iValue2 = 0;
    Bool bRet = false;

    printf("Please enter first number : ");
    scanf("%d",&iValue1);

    printf("Please enter second number : ");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not equal");
    }

    return EXIT_SUCCESS;
}

