#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool SearchElement(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++ )
    {
        if(Arr[iCnt] == iNo)
        {
            return true;         //bad programming practice
        }
    }
    return false;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;   
    int iCnt = 0;
    int iValue = 0;
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(NULL == ptr)       
    {
        printf("Error : Unable to allocate memory\n");
        return EXIT_FAILURE;
    }

    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

   
    printf("Enter the number that you want to search : \n");
    scanf("%d", &iValue);

    bRet = SearchElement(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("Element is present");
    }
    else
    {
        printf("Their is no such element");
    }

    free(ptr);


    return EXIT_SUCCESS;
}