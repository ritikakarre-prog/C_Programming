#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Check divisibility.
//  Input          :  Float
//  Output         :  Void
//  Descreption    :  Accept an integer and determine whether it is divisible by both 3 and 5 only 3, only 5, or neither.
//  Date           :  21/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int iValue)
{
   if((iValue % 3) == 0  && (iValue % 5) == 0 )
   {
      printf("It is divisible by 3 and 5");
   }
   else if((iValue % 3) == 0 )
   {
      printf("It is divisible by 3 only ");
   }
   else if((iValue % 5) == 0 )
   {
      printf("It is divisible by 5 only");
   }
   else
   {
      printf("Neither Divisible");
   }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;

}