
#include<stdio.h>
#include<stdlib.h>

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if(iNo < 0)
    {
      iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
      iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iCnt++;

        iNo = iNo / 10;
    }
    return iCnt;
}

float AverageDigits(int iNo)
{

    int iDigit = 0;
    int iCount = 0;
    int iSum = 0;
    float fAvg = 0.0f;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iSum = SumDigits(iNo);
    iCount = CountDigits(iNo);
    
    fAvg = (float)iSum / (float)iCount;   

    return fAvg;
    
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);

    printf("Average of Digit : %.2f\n", fRet);
    
    return EXIT_SUCCESS;
}