#include<stdio.h>
#include<stdlib.h>
#include<io.h>
#include<fcntl.h>
#include<unistd.h>
//search file
int main()
{
    int fd = 0, icnt=0, iret =0, i=0;
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
      for(i=0; i<iret; i++)//shvatcha 2 asnar 22 bytes buffer no len,for string cuz it wants \0 not string problem
       {
           if(buffer[i] == ' ')
           {
               icnt++;
           }
       }
    }
    printf("total no. of caps are: %d\n", icnt);

    close(fd);



  return 0;
}