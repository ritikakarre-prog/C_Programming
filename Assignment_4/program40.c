#include<stdio.h>
#include<stdlib.h>
int main()
{
    int iValue1 = 0, iValue2 =0;

    printf("first number: \n");
    scanf("%d", &iValue1);

    printf("second number: \n");
    scanf("%d", &iValue2);

    if(iValue1 > iValue2)
    {
        printf("maximun is : %d\n",iValue1);
    }
    else
    {
        printf("maximun is : %d\n",iValue2);

    }

    return EXIT_SUCCESS;
}