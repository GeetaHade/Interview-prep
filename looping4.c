//////////
//accept no  give factorials input = 5
//                           output = 5*4*3*2*1
//unsigned long -- datatype modifier

#include<stdio.h>
//typedef unsigned long int uint

unsigned long int displayfact(int no)
{
  long int isum = 1;
  int icnt = 0;
  for(icnt= 1; icnt <= no; icnt++)
 {
   
   isum = isum * icnt;
 }

return isum;


}



int main()
{
int ino = 0;
unsigned long int iret ;

printf("enter a no: ");
scanf("%d", &ino);
/*
if (ino = -ino)
{
	ino == -(-ino);
}*/



 iret = displayfact(ino);
 printf("%ld",iret);

return 0;
}