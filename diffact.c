#include<stdio.h>

int diffact(int ino)
{int icnt=0, fsum=0, nsum=0;
for(icnt=1; icnt<=ino;icnt++)
   {if(ino%icnt==0)
      fsum=fsum+icnt;
   else //(ino%icnt !=0);
    nsum=nsum+icnt;
   }

printf("%d,%d\t",fsum,nsum);

return nsum-fsum;
}
int main()
{
int ivalue=0, iret=0;
printf("enter no:");
scanf("%d",&ivalue);
iret=diffact(ivalue);
printf("%d",iret);
return 0;
}