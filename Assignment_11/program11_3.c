#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display addition of range.
//  Input          :  Integer, Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept range from user and return addition of all in between that range.
//                     (range should contains positive numbers only)
//  Date           :  1/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCount = 0;
    int iSum = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid Range\n");
        return 0;
    }

    for(iCount = iStart; iCount <= iEnd; iCount++)
    {
        iSum = iSum + iCount;
    }
    return iSum;

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);


    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d", iRet);

    return EXIT_SUCCESS;
}

