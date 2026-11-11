#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name  :  Display exam timing.
//  Input          :  Character
//  Output         :  Void
//  Descreption    :  Accept division of student from user and depends on the division display exam timing. There are 4 divisions in school as A,B,c,D. 
//                    Exam od division A at 7AM, B at 8.30AM, C at 9.20AM and D at 10.30AM.( Application should be case insensitive)
// 
//  Date           :  11/11/2026
//  Author         :  Rithika Prabhakar Karre
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#define true 1
#define false 0
typedef int Bool;

void DisplaySchedule(char chDiv)
{
   if(chDiv == 'A' || chDiv == 'a')
   {
      printf(" Your exam at 7 AM");
   }
   else if(chDiv == 'B' || chDiv == 'b')
   {
      printf(" Your exam at 8.30 AM");
   }
   else if(chDiv == 'C' || chDiv == 'c')
   {
      printf(" Your exam at 9.20 AM");
   }
   else if(chDiv == 'D' || chDiv == 'd')
   {
      printf(" Your exam at 10.30 AM");
   }
   else
   {
      printf("Invalid division");
   }

}

int main()
{
   char cValue = '\0';

   printf("Enter the character : ");
   scanf(" %c", &cValue);

   DisplaySchedule(cValue);

   return EXIT_SUCCESS;
}

