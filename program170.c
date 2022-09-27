#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Arr [10] ;

    fd = open("LB17.txt",O_RDWR);
    if (fd == -1)
    {
        printf("unable to open file\n");
    }
  read(fd,Arr,5); //read 5 letters from file 
  printf("data from file is:\n");

  write(1,Arr,5);   //1 on screen
  close(fd);

  return 0;
}