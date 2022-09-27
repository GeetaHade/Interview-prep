//////////
//print till the no..in decreasing order..

#include<stdio.h>

void display(int no)
{
  int icnt = 1;
for(icnt = no ; icnt >= 1; icnt--)
{
 printf("%d \n",icnt);
}

}



int main()
{
int ino = 0;

printf("enter a no: ");
scanf("%d", &ino);

if(ino = -ino )  //input updater
{
	ino == -(-ino);
}

display(ino);

return 0;
}