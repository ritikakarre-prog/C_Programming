// a e i o u
#include<stdio.h>
#include<stdlib.h>

int countSmallX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z')  )
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

    iRet = countSmallX(Arr);

    printf("Frequency of small letters  : %d\n", iRet);


    return EXIT_SUCCESS;
}