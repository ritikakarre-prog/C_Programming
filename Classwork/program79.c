//Input : 5
//  1+2+3+4+5 = 15

//Input : 8
//  1+2+3+4+5+6+7+8 = 36

#include<stdio.h>
#include<stdlib.h>

int main()
{
   int iCnt = 0;
   int iSum =0;

   iCnt = 1;

   //iSum = 0 + 1;   ->  1

   iSum = iSum + iCnt;
   iCnt++;

  //iSum = 1 + 2;   ->  3
   iSum = iSum + iCnt;
   iCnt++;

   //iSum = 3 + 3;   ->  6
   iSum = iSum + iCnt;
   iCnt++;

   //iSum = 6 + 4;   ->  10
   iSum = iSum + iCnt;
   iCnt++;

  //iSum = 10 + 5;   ->  15
   iSum = iSum + iCnt;
   iCnt++;

   printf("%d\n",iSum);

   return EXIT_SUCCESS;
}