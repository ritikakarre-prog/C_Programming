#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Checks the number is greater or equal .
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Accept an integers and determine which number is greater. If both number are equal, display an appropriate message.
//  Date           :  21/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

void FindGreater(int iFirst , int iSecond)
{
     if(iFirst > iSecond)
     {
          printf("The number %d is Greater\n",iFirst);
     }
     else if(iSecond > iFirst)
     {
          printf("The number %d is Greater\n", iSecond);
     }
     else
     {
          printf("Both numbers are equal\n");
     }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    FindGreater(iValue1 , iValue2);

    return EXIT_SUCCESS;

}