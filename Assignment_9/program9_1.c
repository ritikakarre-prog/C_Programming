#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Print patterns.
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Write a program which accept number from user and display patterns.
//  Date           :  30/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
  int iCount = 0;

  for(iCount = 1; iCount <= iNo; iCount++)
  {
     
      for(iCount = 1; iCount <= iNo; iCount++)
      {
         printf(" *\t",iCount);
         
      }
      for(iCount = 1; iCount <= iNo; iCount++)
      {
         printf(" #\t",iCount);
      }     
    
  }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}

