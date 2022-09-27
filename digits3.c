//return no. of digits in no

#include<stdio.h>

int display(int ino)
{
  int idigit = 0;
  int icnt =0;
  
  if(ino == 0)
  {return 1;}
  
  while(ino != 0)
  {
    idigit = ino%10;
	icnt++;
	ino = ino/10;
  
  }
 return icnt;
}

int main()
{
int ivalue =0, iret =0;

printf("enter a no : ");
scanf("%d", &ivalue);

iret = display(ivalue);

printf("total no. of digits is : %d",iret);

return 0;
}
