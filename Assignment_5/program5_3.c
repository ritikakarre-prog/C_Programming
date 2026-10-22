#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display grades.
//  Input          :  Float
//  Output         :  Void
//  Descreption    :  Accept the marks of a student out of 100 and display the grades.
//  Date           :  21/10/2026
//  Author         :  Rithika Prabhakar Karre
//
/////////////////////////////////////////////////////////////////////////////////

void DisplayGrades(float fMarks)
{
   if(fMarks < 0 || fMarks > 100)
   {
      printf("Invalid Marks");
   }
   else if(fMarks >= 90)
   {
      printf("Grade A\n");
   }
   else if(fMarks >= 75)
   {
      printf("Grade B\n");
   }
   else if(fMarks >= 60)
   {
      printf("Grade C\n");
   }
   else if(fMarks >= 40)
   {
      printf("Grade D\n");
   }
   else
   {
      printf("Fail");
   }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks : ");
    scanf("%f", &fMarks);

    DisplayGrades(fMarks);

    return EXIT_SUCCESS;

}