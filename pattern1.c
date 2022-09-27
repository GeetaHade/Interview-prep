///////////
//input : 5
//output : * * * * *

#include<stdio.h>
/*
void display(int no)
{
 int icnt = 0;
 for(icnt = 1; icnt <=no; icnt++)
  {
   printf("%d \t",icnt*2);
  }

}*/

//input - 6
//output - * # * # * #
void display(int no)
{
 int icnt = 0;
 for(icnt = 1; icnt <=no; icnt++)
  {
   if(icnt%2  == 0)
   { printf("# \t");}
   else
   { printf("* \t");}
 
  }

}



int main()
{
 int i = 0;
 printf("enter a no :");
 scanf("%d",&i);
 display(i);

return 0;
}