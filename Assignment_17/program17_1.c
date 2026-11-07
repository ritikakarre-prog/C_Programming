#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  pattern printing.
//  Input          :  Integer, integer
//  Output         :  Void
//  Descreption    :  Accept number of rows and number coloums from user and display below patterns .
//                       1   2   3   4  
//                       5   6   7   8
//                       9   1   2   3
//                       4   5   6   7
//                    
//  Date           :  7/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Pattern(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    int iCnt = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(iCnt > 9)
            {
                iCnt = 1;
            }

             printf("%d \t",iCnt);  
             iCnt++;
        }   
         printf("\n");
    }
}

int main()
{
    int iValue1 = 0,  iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of coloumns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}

