////tell if no is perfect

#include<stdio.h>
#include<stdbool.h>
/*
bool chkperfect(int ino)
{
  int isum = 0, num = ino, icnt = 1;

  for(icnt =1; icnt<=ino/2; icnt++)
  {
    if(ino%icnt == 0)
	{
	 isum = isum + icnt;
	
	}
  
  }

  
  if(isum == num)
  {
   return true;
  }
  else{return false;}

}*/
/////////////////////////////////
/*
void display(int ino)
{
	int icnt = 1, mult = 1;
	
	for(icnt= 1; icnt <=10; icnt++)
	{
		mult = ino * icnt;
		printf("table of  %d : %d\n",ino, mult);
	}
}
///////////////////////////////*/

int power(int x, int y)
{
	int icnt=1, ans =1;
	
	for(icnt=1; icnt <= y; icnt++)
	{
		ans = ans * x;
	}
	return ans;
}


int main()
{
int ivalue =0 , iret=0, index = 0 ;
//bool bret = false;

printf("enter a number : \n");
scanf("%d", &ivalue);

printf("enter index : \n");
scanf("%d", &index);

/*bret = chkperfect(ivalue);

  if(bret == true)
  {
   printf("no is perfect");
  }
  else
  {
   printf("no is not perfect");
  }
*/
//display(ivalue);
 iret = power(ivalue,index);
 printf("result is : %d ",iret);


return 0;
}