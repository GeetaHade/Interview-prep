#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>
//
int main()
{
    int fd = 0, isum=0, iret =0, i=0;
    char fname[20]; //file name input
    char buffer[10]; //mug

    printf("enter file name\n");
    scanf("%s",fname);

    fd = open(fname, O_RDWR);
    if(fd == -1)
    { 
        printf("unable to open the file\n");
        return -1;
    }
    while((iret = read(fd,buffer,10)) != 0)//iret here is length of buffer
    {                                       //10, 10 ,2,0
      isum = isum + iret;
    }
    printf("file size is: %d\n", isum);

    close(fd);



  return 0;
}