//accept no and check wether 4 bit is on or off (magun count)
//chk wether =boolean
//bit =bitwise ala!
#include <stdio.h>
#include<stdbool.h>
 bool checkbit(int iNo)
 { int imask= 0X00000008; //(hexadecimal always)
  int iret=0;
  iret = iNo & imask;
  if(iret == imask)
  {return true;}
  else
  {return false;}
     
 }

int main()
{ int ivalue=0;
bool bret=false;

  printf("enter number\n");
  scanf("%d",&ivalue);
  
 bret = checkbit(ivalue);
 if(bret == true)
 {
     printf("4th bit is on\n");
 }
 else
 {
     printf("4th bit is off\n");
 }
 
    return 0;
}
