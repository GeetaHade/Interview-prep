//ek file cha dusryat copy honare don file chi nav 1 bharleli 2 new fresh create
#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fdsrc = 0 ,fddest = 0, iret=0;
    char Fname1[30];
    char Fname2[30]; //new file name
    char Buffer[1024];  //mug operating system buffer chi default
//size (os mug byte)aste 1024.
    printf("enter source file name\n");
    scanf("%s",Fname1);  

    fdsrc = open(Fname1,O_RDONLY); //kuthe kay 

    if(fdsrc == -1)
    {
        printf("unable to open the file\n");
        return -1; 
    }
    else
    {
        printf("file successfully opened with FD : %d\n",fdsrc);

    }
    printf("enter destination file name\n");
    scanf("%s",Fname2);

    fddest = creat(Fname2,0777);  //create new file


    printf("data from file is:\n");
    while((iret = read(fdsrc,Buffer,sizeof(Buffer)))!=0)//kashtna,kashat,kiti
    //(brackets mojun)
    {
        write(fddest,Buffer,iret);  
    }
    close (fdsrc);
    close(fddest);
    return 0;
}