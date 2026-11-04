#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  pattern printing.
//  Input          :  Integer, integer
//  Output         :  Void
//  Descreption    :  Accept number of rows and number coloums from user and display below patterns .
//                       A  B  C  D
//                       a  b  c  d
//                       A  B  C  D
//                       a  b  c  d
//                    
//  Date           :  4/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Pattern(int iRow , int iCol)
{
    int i = 0;
    int j = 0;
    char chCaptial = '\0';
    char chlower = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, chCaptial = 'A', chlower = 'a'; j <= iCol; j++, chCaptial++, chlower++)
        {
            if((i % 2) != 0)
            {
                printf("%c \t", chCaptial);
            }
            else
            {
                printf("%c \t", chlower);
            }
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

