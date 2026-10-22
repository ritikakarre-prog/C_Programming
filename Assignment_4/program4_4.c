#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Checks the eligibility .
//  Input          :  Integer
//  Output         :  Void
//  Descreption    :  Accept the age of a person and determine whether the person is eligible to vote.A person must be at least 18 year old to vote.A negative age sholud be considering invalid.
//  Date           :  21/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

void ChecksVotingEligibility(int iAge)
{
     if(iAge >= 18)
     {
          printf("The person is eligible for vote");
     }
     else
     {
          printf("The person is not eligible for vote");
     }
}

int main()
{
    int iAge = 0;

    printf("Enter your age : ");
    scanf("%d", &iAge);

    ChecksVotingEligibility(iAge);

    return EXIT_SUCCESS;

}