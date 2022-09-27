//offset default zero so data overwrite hoto so O_APPEND use kra to avoid overwriting.
#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Arr [] = "hello";

    fd = open("LB17.txt",O_RDWR | O_APPEND);
    if (fd == -1)
    {
        printf("unable to open file\n");
    }
  write(fd,Arr,5);
  close(fd);

  return 0;
}