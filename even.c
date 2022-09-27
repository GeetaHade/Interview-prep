//input= 4
//output=2 4 6 8

#include<stdio.h>

int even(int ino)
{
	int icnt=0;
	for(icnt=1; icnt<=2*ino;icnt++)
		if (icnt%2==0)
		{printf("%d\t",icnt);}
	return icnt;
}
int main()
{int ino=0 , iret=0;
 printf("enter a no:");
 scanf("%d",&ino);
 iret=even(ino);
 
	return 0;
}