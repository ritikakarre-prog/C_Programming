#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Checks the greatest number.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Accept three integers and determine the greatest number among them. The program must also work correctly when two or all three numbers are equal.
//  Date           :  21/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

void FindGreatest(int iFirst, int iSecond, int iThird)
{
     if(iFirst >= iSecond && iFirst >= iThird)
     {
          printf("The number %d is greater\n", iFirst);
     }
     else if(iSecond >= iThird && iSecond >= iFirst)
     {
           printf("The number %d is greater\n", iSecond);
     }
     else
     {
          printf("The number %d is greater\n", iThird);
     }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue1);

    printf("Enter a number : ");
    scanf("%d", &iValue2);

    printf("Enter a number : ");
    scanf("%d", &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;

}