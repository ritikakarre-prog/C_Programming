#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Calculate the discount.
//  Input          :  Float
//  Output         :  Void
//  Descreption    :  A student is eligible for admission if the student's marks are at least 60 and age is at least 17 years .Accept both values and determine 
//                    eligibility. Negative age or marks outside 0 - 100 must be treated as invalid input.  
//  Date           :  22/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 1000 )
    {
      fDiscount =  fAmount * 0.0f;
    }
    else if(fAmount >= 1000 && fAmount <5000)
    {
      fDiscount =  fAmount * 0.10f;
    }
    else 
    {
      fDiscount =  fAmount * 0.20f;
    }
    
    fFinalAmount = fAmount - fDiscount;
    
    printf("Total discount amount is %.2f",fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount : ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}

