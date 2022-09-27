#include<stdio.h>

/*
void display(int irow, int icol)
{
 int i=0, j=0;
 
 for(i = 1; i<=irow; i++)
 {
  for(j = icol; j>=1; j--)
  {
   printf("%d\t",j);
  }
   printf("\n");
 }
 
}
*///////////////////////////////////////
/*
void display(int irow, int icol)
{
 int i=0, j=0;
 char ch = '\0';
 
 for(i = 1; i<=irow; i++)
 {
  for(j = 1, ch = 'A'; j<=icol; j++,ch++)
  {
   printf("%c\t",ch);
  }
   printf("\n");
 }
 
}
*//////////////////////////////////
/*
void display(int irow, int icol)
{
 int i=0, j=0;
 char ch = '\0', c = '\0';
 
 for(i = 1; i<=irow; i++)
 {
  for(j = 1, ch = 'A', c = 'a'; j<=icol; j++,ch++,c++)
  {
	if(i %2 == 0)
	  { printf("%c\t",c);}
    else
	  { printf("%c\t",ch);}
  }
   printf("\n");
 }
 
}
*/////////////////////////////////////////

/*
void display(int irow, int icol)
{
 int i=0, j=0;
 char ch = '\0', c = '\0';
 
 for(i = 1, ch = 'A'; i<=irow; i++,ch++)
 {
  for(j = 1; j<=icol; j++)
  {
	  { printf("%c\t",ch);}
  }
   printf("\n");
 }
 
}
*/
///////////////////////////////////////////
/*
void display(int irow, int icol)
{
 int i=0, j=0;
 
 for(i = irow; i>=1; i--)
 {
  for(j = 1; j<=icol; j++)
  {
   printf("%d\t",i);
  }
   printf("\n");
 }
 
}
*///////////////////////////////////////////

void display(int irow, int icol)
{
 int i=0, j=0, a=1;
 
 for(i = 1; i<=irow; i++)
 {
  for(j = 1; j<=icol; j++)
  {
   printf("%d\t",a++);
  }
   printf("\n");
 }
 
}



int main()
{
int row = 0, col = 0;

printf("enter row: ");
scanf("%d",&row);

printf("enter col: " );
scanf("%d",&col);

display(row,col);

return 0;
}