#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[]={'G','A','N','E','S','H','\0'};

    printf("%s\n", Arr);

    printf("Size of array is : %d\n", sizeof(Arr));
    
    return EXIT_SUCCESS;
}