#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Kilometre to metre conversion.
//  Input          :  Integer
//  Output         :  Integer
//  Descreption    :  Write a program which accept distance in kilometre and convert it into meter.
//                       (1 kilometre = 100 metre)
//  Date           :  31/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int KMToMetre(int iNo)
{
   int iKM= 0;

      iKM = iNo * 1000;
      return iKM;
}

int main()
{
    int iValue = 0;
    int iRet = 0.0;

    printf("Enter distance : ");
    scanf("%d", &iValue);

    iRet = KMToMetre(iValue);

    printf("Distance in metre is %d", iRet);

    return EXIT_SUCCESS;
}

