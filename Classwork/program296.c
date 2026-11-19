#include<stdio.h>
#include<stdlib.h>

int  main()
{
    int No = 14;
    int Ans = 0;

    Ans = No >> 3;    //2^3 = 14 / 8 = 1.75

    printf("%d\n",Ans);

    return EXIT_SUCCESS;
}