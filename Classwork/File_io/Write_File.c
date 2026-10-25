#include<stdio.h>
#include<fcntl.h>               // file control
#include<unistd.h>

int main()
{
    int fd  = 0;
    fd = open("Hello.txt", O_RDWR );

    if(fd== -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File gets opened with fd : %d\n",fd);
        _write(fd,"Jay Ganesh...", 13);
        close(fd);

    }
    return 0;
}