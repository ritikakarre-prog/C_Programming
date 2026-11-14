/*
----------------------------------------------
               Operation &&
  --------------------------------------------
  Result 1      Result 2      Final Result
  --------------------------------------------
   True          True            True
   True          False           False
   False         True            False      short circuit
   False         False           False      short circuit
  --------------------------------------------


*/
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    //logic
    if((iNo % 3)== 0 && (iNo % 5)== 0)
    {
        printf("Number is divisible\n");
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