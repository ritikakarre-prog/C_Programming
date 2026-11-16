//8998
//14341
//7007
//7899

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iRev = 0;
    int iDigit = 0;
    int iTemp = 0;

    iTemp = iNo;

    while(iNo != 0)
    {
       iDigit = iNo % 10;
       iRev = (iRev * 10) + iDigit;
       iNo = iNo / 10;
    }
    
    if(iRev == iTemp)   // issue solved
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("It is pallidrome");
    }
    else
    {
         printf("It is not pallidrome");
    }

    return EXIT_SUCCESS;
}