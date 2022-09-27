//count even digits...
//return no. of digits in no

#include<stdio.h>
#include<stdbool.h>

int display(int ino)
{
  int idigit = 0;
  int icnt =0;
  
  if(ino == 0)
  {return 1;}
  
  while(ino != 0)
  {
    idigit = ino%10;
	if(idigit%2 == 0)
	{
	icnt++;
	}
	ino = ino/10;
  
  }
 return icnt;
}

int sumeven(int ino)
{
	int idigit = 0;
    int isum =0;
  
  while(ino != 0)
  {
    idigit = ino%10;
	if(idigit%2 == 0)
	{
	isum = isum + idigit;
	}
	ino = ino/10;
  
  }
 return isum;
}

int reverseno(int ino)
{
	int idigit =0, irev =0 ;
	
	while(ino != 0)
	{
		idigit = ino % 10;
		irev = (irev * 10)+idigit;
		ino = ino/10;
		
	}
	return irev;
}

bool chkpallindrome(int ino) 
{
	int irev=0;
	int num = ino;
	irev = reverseno(ino);
	/*
	while(ino != 0)
	{
		idigit = ino % 10;
		irev = (irev * 10) + idigit;
        ino = ino/10;
	}
	*/
	
	if(num == irev)
	{
		return true;
	}
	else
	{    return false;
	}
	
}

int main()
{
int ivalue =0, iret =0, ical=0, irev =0;
bool bret = false;

printf("enter a no : ");
scanf("%d", &ivalue);

iret = display(ivalue);

printf("total no. of even digits is : %d\n",iret);

ical = sumeven(ivalue);
printf("total sum of even digits is : %d\n",ical);

irev = reverseno(ivalue);
printf ("reverse of no is : %d\n",irev);

bret = chkpallindrome(ivalue);
   if(bret == true)
     { printf("no. is a pallindrome"); }
   else
	 { printf("no. is not a pallindrome"); }
   
return 0;
}
