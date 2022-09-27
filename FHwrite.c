#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{  
    int fd = 0 , iret= 0;

    char Fname[30];
    char data[] = "geeta prakash hade";

    printf("enter file name");
    scanf("%s", Fname);

    fd = open(Fname, O_RDWR);

    if(fd == -1)
    {
        printf(" file not opened");
        return 0;
    }

    iret = write(fd,data,4);
    printf("%d bytes of data written in file",iret);


    
    return 0;

}