/*
            step1 : Understand the problem statement
            step2 :  Write the algorithms
            step3 : Deside the programming language
            step4 :  Write the program
            step5 : Test the program
*/

///////////////////////////////////////////////////////////////////////////////////
//step1 : Understand the problem statement
//        User is going toenter any 2 integers
//        And we have to perform addition
//////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////
// step2 :  Write the algorithms
/*
  START
       Accept first number as No1
       Accept second number as No1
       Create the vairable as Ans to store the result
       Perform the addition and store into Ans
       Displa the result fron Ans
  STOP
*/
///////////////////////////////////////////////////////////////////////////////////
//
//step3 : Deside the programming language
//        we select c programming
//////////////////////////////////////////////////////////////////////////////////
//
//step4 :  Write the program
//         
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
    int iValue1, iValue2, iResult;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;     //Business logic

    printf("%d\n",iResult);
    
    return 0;
}