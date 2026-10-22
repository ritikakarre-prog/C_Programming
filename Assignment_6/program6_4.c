#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Check triangle validity.
//  Input          :  Float
//  Output         :  Void
//  Descreption    :  Accept three integer values representing the length of the side of a triangle. Determine whether they can 
//                    form a valid triangle. All side must be positive, and the sum of any two sides must be greater than the third side.
//  Date           :  22/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1 < 0 || iSide2 < 0 || iSide3 < 0)
    {
      return;
    }

    if((iSide1 + iSide2) > iSide3 && (iSide2 + iSide3) > iSide1 && (iSide1 + iSide3) > iSide2)
    {
          printf("The triangle is valid");
    }
    else
    {
       printf("The triangle is not valid");
    }
}

int main()
{
    int iSide1 = 0, iSide2 =0, iSide3 =0;

    printf("Enter side1 : ");
    scanf("%d", &iSide1);

    printf("Enter side2 : ");
    scanf("%d", &iSide2);

    printf("Enter side3 : ");
    scanf("%d", &iSide3);


    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}

