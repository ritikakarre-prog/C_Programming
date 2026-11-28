#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;
    int iSize = 0;   
    int iCnt = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(NULL = ptr)             //Issue (Assignment operator)
    {
        printf("Error : Unable to allocate memory\n");
        return EXIT_FAILURE;
    }

    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }


    //function call

    free(ptr);


    return EXIT_SUCCESS;
}