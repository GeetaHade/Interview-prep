//input= 24
//output=1 2 4 6 8 12

#include<stdio.h>

int evenfac(int ino)
{
	int icnt=0;
	if(ino<0)
	{
	    ino=-ino;    //updater
	}
	if(ino==0)
	{printf("enter valid number!!");}
	for(icnt=1; icnt<=ino/2;icnt++)
		if ((ino%icnt==0) && (icnt%2==0))
		{printf("%d\t",icnt);}
	return icnt;
}
int main()
{int ino=0 , iret=0;
 printf("enter a no:");
 scanf("%d",&ino);
 iret=evenfac(ino);
 
	return 0;
}
