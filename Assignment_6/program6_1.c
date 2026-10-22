#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Calculate totoal bill.
//  Input          :  Integer
//  Output         :  Void, Float
//  Descreption    :  Accept the number of electricity units consumed and calculate the total bil.
//  Date           :  22/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;
    float fRate = 0;

    if(iUnits>0 && iUnits <= 100)
    {
        fBill = iUnits * 5.0f;
    }
    else if(iUnits > 100 && iUnits <= 200)
    {
        fBill = (100 * 5.0f) + ((iUnits -100) * 7.0f);
    }
    else
    {
        fBill = (100 * 5.0f) + (100 * 7.0f) + ((iUnits - 200) * 10.0f);

    }
    
    printf("Your Bill is %f ",fBill);
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units : ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}

