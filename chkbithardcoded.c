//full hardcoded
#include <stdio.h>
#include<stdbool.h>

typedef unsigned int UINT; //(input unsigned havay signed la 1 bit reserved asto)

 bool checkbit(UINT iNo, UINT ipos)
 { UINT imask= 0X00000001;
  UINT iret=0;
  
  //if((ipos<1) || (ipos >32))  //filter
  imask = imask<<(ipos-1);
  iret = iNo & imask;
  if(iret == imask)
  {return true;}
  else
  {return false;}
     
 }

int main()
{ UINT ivalue=0, ibit=0;
bool bret=false;

  printf("enter number\n");
  scanf("%d",&ivalue);
  
  printf("enter position\n");
  scanf("%d",&ibit);
 bret = checkbit(ivalue,ibit);
 if(bret == true)
 {
     printf("bit is on\n");
 }
 else
 {
     printf("bit is off\n");
 }
 
    return 0;
}
