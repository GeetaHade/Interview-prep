//return addition of digits..

#include<stdio.h>

int display(int ino)
{
	
	int idigit =0;
	int isum =0;
	
	if(ino = -ino)
	{
		ino == -(-ino);
	}
	
while(ino != 0)
{
	idigit = ino%10;
	isum = isum + idigit;
	ino= ino/10;
}

 return isum;	
}



int main()
{
	int ivalue = 0, iret = 0;
	printf("enter no:");
	scanf("%d",&ivalue);
	
	iret = display(ivalue);
	printf("sum is : %d ", iret);
	return 0;
}