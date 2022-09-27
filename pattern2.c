//input -6 
//output- a b c d e f
#include<stdio.h>
void display(int no)
{
 char ch='\0';
 int icnt = 0;
 for(icnt = 1, ch='a'; icnt <=no; icnt++, ch++)
  {
   printf("%c\t",ch);
   //ch++;
  }
  printf("\n");

}

void DISPLAY(int no)
{
 char ch='\0';
 int icnt = 0;
 for(icnt = 1, ch='A'; icnt <=no; icnt++, ch++)
  {
   printf("%c\t",ch);
   //ch++;
  }
  printf("\n");

}



int main()
{
 int i = 0;
 printf("enter a no :");
 scanf("%d",&i);
 display(i);
 DISPLAY(i);

return 0;
}