#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0 , iret=0;
    char Fname[30];
    char Buffer[10];  //mug

    printf("enter file name\n");
    scanf("%s",Fname);  

    fd = open(Fname,O_RDONLY); //kuthe kay 

    if(fd == -1)
    {
        printf("unable to open the file\n");
        return -1; 
    }
    else
    {
        printf("file successfully opened with FD : %d\n",fd);

    }
    printf("data from file is:\n");
    while((iret = read(fd,Buffer,sizeof(Buffer)))!=0)//kashtna,kashat,kiti
    //(brackets mojun)
    {
        write(1,Buffer,iret);  
    }
    close (fd);
    return 0;
}