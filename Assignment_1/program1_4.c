#include<stdio.h>
typedef int bool;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Accept one number and chech whether it is divisible by 5 or not.
//  Input          :  Integer, Bool
//  Output         :  Bool
//  Descreption    :  Divisible by 5 or not
//  Date           :  19/10/2026
//  Author         :  Rithika Prabhakar Karre
/////////////////////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
    if((iNo % 5)== 0)
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
    
    printf("Enter number");
    scanf("%d", &iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
    return 0;
}