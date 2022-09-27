#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT; //(input unsigned havay signed la 1 bit reserved asto)

 bool checkbit(UINT iNo)
 { int imask= 0X0000000F; //(hexadecimal always)(2191)
  int iret=0;
  iret = iNo & imask;
  if(iret == imask)
  {return true;}
  else
  {return false;}
     
 }

int main()
{ UINT ivalue=0;
bool bret=false;

  printf("enter number\n");
  scanf("%d",&ivalue);
  
 bret = checkbit(ivalue);
 if(bret == true)
 {
     printf("last 4 bit is on\n");
 }
 else
 {
     printf("last 4 bit is off\n");
 }
 
    return 0;
}
