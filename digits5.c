#include<stdio.h>

int cntrange(int ino)
{
 int idigit = 0, icnt =0;

 while(ino !=0 )
   {
    idigit = ino%10;
	if((idigit > 3) && (idigit < 7))
	{icnt++;}
	ino= ino/10;
   } 
   return icnt;

}

int multiply(int ino)
{
	int idigit = 0, mult = 1;

 while(ino !=0 )
   {
    idigit = ino%10;
	mult= mult * idigit;
	ino= ino/10;
   } 
   return mult;
}

int difference(int ino)
{
	int idigit = 0, esum  = 0, osum = 0;

 while(ino !=0 )
   {
    idigit = ino%10;
	if(idigit%2 == 0)
	{esum = esum + idigit;}
    else
	{osum = osum + idigit;}
	ino= ino/10;
   } 
   return esum - osum;
}



int main()
{
int ivalue =0, iret = 0, imult = 0, diff =0 ;

printf(" enter a no.: ");
scanf("%d", &ivalue);

iret = cntrange(ivalue);
printf("total nos between 3 and 7 are : %d \n", iret);

imult = multiply(ivalue);
printf("mutiplying digits we get : %d\n",imult);

diff = difference(ivalue);
printf("diff between even and odd digits is : %d \n",diff);

return 0;
}