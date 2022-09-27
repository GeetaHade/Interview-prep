#include<stdio.h>

void checkcapital(char c)
{
 if(c >= 'A' && c <= 'Z' )
 {
  printf("capital letter");
  printf("small is %c",c+32);
 }
 
 else if(c >= 'a' && c <= 'z' )
 {
  printf("small letter");
    printf("capital is %c",c-32);
 }
 
 else if(c >= '0' && c <= '9' )
  {
  printf("is a digit");
 }
}

int main()
{
char ch = '\0'; 

printf("enter char :" );
scanf("%c",&ch );

checkcapital(ch);


return 0;
}