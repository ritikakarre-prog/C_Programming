#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>               // file control

int main()
{
    int ret = 0;
    ret = unlink("Demo.txt");
    if(ret== -1)
    {
        printf("Unable to delete the file\n");
    }
    else
    {
        printf("File gets successfully deleted\n");
    }
    return 0;
}