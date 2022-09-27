#include <stdio.h>

int cntfreq(char*str, char ch )
 {
     int icnt=0;
     while(*str != '\0')
     {
         if (*str == ch)
         {icnt++;}
         
         str++;
     }
     
     return icnt;
 }

int main()
{
    char arr[30];
    char cvalue='\0';
    int iret=0;
    
    printf("enter string:\n");
    scanf("%[^'\n']s",arr);
    
    printf("enter character:\n");
    scanf(" %c",&cvalue);
    
    iret = cntfreq(arr, cvalue);
    printf("frequency of character is %d\t:", iret);
     

    return 0;
}
