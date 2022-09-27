#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>
//offset 0 pasun read hotoy to mla 5 pasun kraychay 
int main()
{
    int fd = 0;
    char Arr [10] ;

    fd = open("LB17.txt",O_RDWR);
    if (fd == -1)
    {
        printf("unable to open file\n");
    }
    // 0 from starting position
    //1 from current pos
    //2 from end of line
  lseek(fd,5,0);//cursor or offset shift to 5//kashatun, kitine, kuthun
  read(fd,Arr,5);                            //fd,5,0
  printf("data from file is:\n");

  write(1,Arr,5);   
  close(fd);

  return 0;
}