#include<iostream>
#include<stdio.h>

using namespace std;

int countcap(char *str)
{
    int icnt = 0;

    while(*str != '\0')
    {
        
        if((*str >= 'A') && (*str <='Z'))
        {
            icnt++;
        }
        str++;
        
    
    }
    return icnt;
}

int countcapR(char *str)
{
    static int icnt = 0;

    if(*str != '\0')
    {
        
        if((*str >= 'A') && (*str <='Z'))
        {
            icnt++;
        }
        str++;
        countcapR(str);
        
    
    }
    return icnt;
}

int main()
{
    char Arr[20];
    int iret = 0;

    cout<<"enter string\n";
    scanf("%[^'\n']s",Arr);

    iret = countcapR(Arr);

    cout<<"countcap is:"<<iret<<"\n";
    return 0;
}