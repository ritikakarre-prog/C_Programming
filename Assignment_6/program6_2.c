#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Checks student eligibility for admission.
//  Input          :  Integer, Float
//  Output         :  Void
//  Descreption    :  A student is eligible for admission if the student's msrks are at least 60 
//                     and age is at least 17year .Accept both values and determine eligibility.
//                     Negative age or marks outside 0-100 must be treadted as invalid input.
//  Date           :  22/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void CheckAdmission(float fMarks, int iAge)
{
    if(fMarks < 100 && fMarks >= 60 && fMarks >0)
    {
        if(iAge >= 17)
        {
            printf("A student is eligible for admission");
        }
        else
        {
             printf("A student is not eligible for admission");
        }
    }
    else
    {
         printf("A student is not eligible for admission");
    }

}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks : ");
    scanf("%f", &fMarks);

    printf("Enter age : ");
    scanf("%d", &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}

