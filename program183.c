#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>
//
int main()
{
    int fd = 0, iret =0;
    char fname[20]; //file name input
    

    printf("enter file name\n");
    scanf("%s",fname);

    fd = open(fname, O_RDWR);
    if(fd == -1)
    { 
        printf("unable to open the file\n");
        return -1;
    }
   iret = lseek(fd,0,2);

    printf("file size is: %d\n", iret);

    close(fd);



  return 0;
}