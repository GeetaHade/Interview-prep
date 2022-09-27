#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>
//lseek 5 read again lseek read 
int main()
{
    int fd = 0;
    char Arr [10] ;

    fd = open("LB17.txt",O_RDWR);
    if (fd == -1)
    {
        printf("unable to open file\n");
        return -1;  //no garbage
    }
    // 0 from starting position
    //1 from current pos
    //2 from end of line
  lseek(fd,-5,2);//2 from end of file

  read(fd,Arr,5);                            
  write(1,Arr,5); 
  printf("\n");


  close(fd);

  return 0;
}