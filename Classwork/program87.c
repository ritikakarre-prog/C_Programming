
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3)== 0)
    {
        if((iNo % 5)== 0)
        {
            printf("Number is divisible\n");
        }
        else
        {
            printf("Number is not divisible\n");
        }
    }
    else
    {
      printf("Number is not divisible\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}