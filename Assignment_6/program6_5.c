#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Calculate Employee Bonus.
//  Input          :  Float, Integer
//  Output         :  Void
//  Descreption    :  Accept an employee's monthly salary and completed years of service. Calculate the bonus using these rules: more than 10 years
//                    of service earns a bonus of 15% of monthly salary; 5 to 10 years earns 10%; less than 5 years earns 5%. Salary must be positive
//                    and years of service cannot be negative.
//  Date           :  22/10/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if( fSalary <= 0 && iYears < 0)
    {
        return;
    }

    if(iYears > 10)
    {
        fBonus  = fSalary * 0.15f;
    }
    else if(iYears <= 10 && iYears >= 5)
    {
        fBonus  = fSalary * 0.10f;
    }
    else
    {
        fBonus  = fSalary * 0.05f;
    }

    printf("The Bouns is %.2f",fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary : ");
    scanf("%f", &fSalary);

    printf("Enter years of service : ");
    scanf("%d", &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}

