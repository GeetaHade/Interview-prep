#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0 , iret=0;
    char Fname[30];
    char Data[7];

    printf("enter file name\n");
    scanf("%s",Fname);  

    fd = open(Fname,O_RDWR); //kuthe kasa 

    if(fd == -1)
    {
        printf("unable to open the file\n");
        return -1; 
    }
    else
    {
        printf("file successfully opened with FD : %d\n",fd);

    }

    iret = read(fd,Data,7);
    printf("%d bytes gets successfully read from file\n",iret);
    printf("data from file is : %s\n",Data);//printf internally calls write system call

    return 0;
}