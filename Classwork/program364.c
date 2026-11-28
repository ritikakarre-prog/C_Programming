#include<stdio.h>
#include<stdlib.h>

void EvenOddCount(int Arr[], int iLength)
{
    int iCnt = 0; int iCountEven = 0; int iCountOdd = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++ )
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }
    printf("Number of even element : %d, Odd elements : %d\n", iCountEven, iCountOdd);
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;   
    int iCnt = 0;

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

    EvenOddCount(ptr, iSize);

    free(ptr);


    return EXIT_SUCCESS;
}