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

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Addition
//  Input          :  Integet, Integer
//  Output         :  Integer
//  Descreption    :  Peforms Addition
//  Date           :  04/10/2026
//  Author         :  Ritika Prabhakar Karre
/////////////////////////////////////////////////////////////////////////////////


int Addition(int iNo1, int iNo2)
{
  int iAns = 0;

  iAns = iNo1 + iNo2;           //Business logic

  return iAns;
}

/////////////////////////////////////////////////////////////////////////////////
//   Entry point of the apllication
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);     

    printf("Addition is: %d\n",iResult);
    
    return 0;
}