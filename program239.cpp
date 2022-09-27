#include<iostream>
#include<stdio.h>
using namespace std;

int strleni(char *str)
{
    int icnt = 0;

    while(*str != '\0')
    {
        icnt++;
        str++;
    }
    return icnt;
}

int strlenR(char *str)
{
    static int icnt = 0;

    while(*str != '\0')
    {
        icnt++;
        str++;
        strlenR(str);  //str is pudhe gelela add str cha
    }
    return icnt;
}

int main()
{
    char Arr[20];
    int iret = 0;

    cout<<"enter string\n";
    scanf("%['\n']s",Arr);

    iret = strleni(Arr);

    cout<<"length string is:"<<iret<<"\n";
    return 0;
}