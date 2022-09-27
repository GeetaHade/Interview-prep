//count vowels //case sensitive
#include <stdio.h>
int count(char *str)
{
    int icnt=0;
    while(*str!='\0')
    {
        if(*str=='a'||*str=='e'||*str=='i'||*str=='o'||*str=='u')
        {
            icnt++;
        }
        str++;
    }
    return icnt;
    
}
    


int main()
{ char arr[30];
  int iret=0;
   
   printf("enter string\n");
   scanf("%[^'\n']s",arr);
   
   iret=count(arr);
   printf("no of vowels are:%d", iret);

   return 0;
}
