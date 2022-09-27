//write program in c which is used to create new file(file handling)
#include<stdio.h>
#include<stdlib.h>
#include<io.h>

int main()
{
    int fd = 0;
    char Fname[30];

    printf("enter file name\n");
    scanf("%s",Fname);  //indirectly array of character

    fd = creat(Fname,0777);  //creates file creat(file name, octal permission)

    if(fd == -1)
    {
        printf("unable to create the file\n");
    }
    else
    {
        printf("file successfully created\n");
    }
    return 0;
}
//os does't know extension..(#loliipop to enduser)