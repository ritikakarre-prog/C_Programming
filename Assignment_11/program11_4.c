#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display addition of range.
//  Input          :  Integer, Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept range from user and return addition of all even number in between that range.
//                     (range should contains positive numbers only)
//  Date           :  1/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
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
        if((iCount % 2) == 0)
        {
              iSum = iSum + iCount;
        }
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


    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition is %d", iRet);

    return EXIT_SUCCESS;
}

