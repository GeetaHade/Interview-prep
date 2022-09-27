//input= 24
//output=1 2 4 6 8 12

#include<stdio.h>

void strlwr(char *brr)
{
  while(*brr != '\0')
  
	  
	{if ((*brr >='A') || (*brr <= 'Z'))
	  *brr = *brr + 32;
	
	  brr++;
	}
  
}


int main()
{   char arr[30];
    printf("enter string");
	scanf("%[^'\0']s", arr);

	strlwr(arr);

	printf("modified string is %s",arr);
	return 0;

}