//////////
//print till the no..

#include<stdio.h>

void display(int no)
{
  int icnt = 1;
for(icnt = 1 ; icnt <= no; icnt++)
{
 printf("%d \n",icnt);
}

}



int main()
{
int ino = 0;

printf("enter a no: ");
scanf("%d", &ino);

if(ino < 0)  //input updater
{
	ino == -(-ino);
}

display(ino);

return 0;
}