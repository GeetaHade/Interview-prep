#include<stdio.h>
/*
void display(char *brr)
{
	int i = 0;
 while(*brr != '\n')
 {
	 printf(" %c",*brr);	
     brr++;
	 i++;
 }
}
*////////////////////////////////////////////////
/*
int strlenX(char *str)
{
	int icnt =0 ;
	if(str == NULL)
	{return 0;}

    while(*str != '\0')
 {
	icnt++;	
     str++;
	 
 }
 return icnt;
}
*//////////////////////////////////////////////////


void countsmall(char *str)
{
	int icnt=0, i =0 ;
	while(*str != '\0')
	{
		if(*str >= 'a' && *str<= 'z')
		{
			icnt++;
		}
		else if(*str >= 'A' && *str<= 'Z')
		{i++;}
	
		str++;
	}
	printf("ccnt is %d,  scnt is %d", i,icnt);
}
int main()
{
char arr[20] ;
//int iret = 0;

printf("enter string: \n");
scanf("%[^'\n']s",&arr);

//display(arr);
//iret = strlenX(arr);
//printf("length  is: %d",iret);

countsmall(arr);
//printf("small count  is: %d",iret);


return 0;
}