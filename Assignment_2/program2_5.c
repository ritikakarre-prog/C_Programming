#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int bool;

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Check number is odd or even.
//  Input          :  Integer, Bool
//  Output         :  Bool
//  Descreption    :  Accept one number from user and check whether number is even or odd.
//  Date           :  19/10/2026
//  Author         :  Rithika Prabhakar Karre
/////////////////////////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
    if( (iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;
    
    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("It is an even number\n");
    }
    else
    {
        printf("It is an odd number\n");
    }

    return 0;
}