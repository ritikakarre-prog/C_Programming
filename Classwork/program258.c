// a e i o u
#include<stdio.h>
#include<stdlib.h>

int countCapitalX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z')  )
        {
            iCount++;
        }
         str++;
      
    }
    return iCount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = countCapitalX(Arr);

    printf("Frequency of capital letters  : %d\n", iRet);


    return EXIT_SUCCESS;
}