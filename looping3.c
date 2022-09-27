//////////
//accept no input = 5
//           output = 5+4+3+2+1

#include<stdio.h>

int displayadd(int no)
{
  int isum = 0;
  int icnt = 0;
  for(icnt= 1; icnt <= no; icnt++)
 {
   
   isum = isum + icnt;
 }

return isum;


}



int main()
{
int ino = 0;
int iret ;

printf("enter a no: ");
scanf("%d", &ino);

if (ino = -ino)
{
	ino == -(-ino);
}

 iret = displayadd(ino);
 printf("%d",iret);

return 0;
}