#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>
//create hole in file(potential space)
int main()
{
    int fd = 0;
    char Arr [10] ;

    fd = open("LB17.txt",O_RDWR);//wronly never
    if (fd == -1)
    {
        printf("unable to open file\n");
        return -1;  //no garbage
    }
    // 0 from starting position
    //1 from current pos
    //2 from end of line
  lseek(fd,10,2); //end paun pudhe
                            
  write(fd,"*",1); //1 star print
  


  close(fd);

  return 0;
}