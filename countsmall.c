/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdbool.h>
int smallcount(char *str)
{
    int icnt=0;
    while(*str != '\0')
    {
        if ((*str>='a')&&(*str<='z'))
        {icnt++;}
        str++;
    }
    return icnt;
}

int main()
{char arr[20];
int iret=0;
printf("enter string\n");
scanf("%[^'\n']s",arr);
iret = smallcount(arr);

printf("small letter are: \n%d",iret);
return 0;
}