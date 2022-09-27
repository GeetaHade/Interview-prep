/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdbool.h>
int countcapital(char *str)
{
    int icnt=0;
    while(*str != '\0')
    {
        if ((*str>='A')&&(*str<='Z'))
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
iret = countcapital(arr);

printf("capital letters are: \n%d",iret);
return 0;
}