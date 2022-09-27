#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0 , iret=0;
    char Fname[30];
    char Data[] = "Marvellous Infosystems";

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

    iret = write(fd,Data,10); //kashat, kay, kiti
    printf("%d bytes gets successfully written in file\n",iret);

    return 0;
}