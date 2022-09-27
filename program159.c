#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[30];

    printf("enter file name\n");
    scanf("%s",Fname);  //indirectly array of character

    fd = open(Fname,O_RDWR);  //read writeRDWR

    if(fd == -1)
    {
        printf("unable to open the file\n");
    }
    else
    {
        printf("file successfully opened with FD : %d\n",fd);
    }
    return 0;
}