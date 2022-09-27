#include <stdio.h>
 void swap(char *p, char *q)
 { char temp;
 
 temp = *p;
 *p = *q;
 *q = temp;
     
 }
int main()
{
    char ch1, ch2;
    printf("enter ch1:");
    scanf("%c" ,&ch1);
    
     printf("enter ch2:");
    scanf(" %c" ,&ch2);
    
    printf("before swap %c, %c\t", ch1, ch2);
    
    swap(&ch1, &ch2);  //call by add. passes add swap(100,200)
     printf("before swap %c, %c\t", ch1, ch2);
    
return 0;
}