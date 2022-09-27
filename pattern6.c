#include<stdio.h>

void display(int row, int col)
{
 int i =0 , j=0;
 
 for(i = 1; i<= row; i++)
  {
   for(j = 1; j<=col; j++)
    {
	  //if(i + j == 7)
	   //{printf("*\t");}
	
	  if(i == 1  || j == 1 ||  i == row || j == col)
	    {printf("*\t");}
     // else
	  //  {printf(" \t");}
	 
	   if(i + j == 7)
	   {printf("*\t");}
   
       if(i != 1 && j!= 1 && i+j <7 )
		 {printf("#\t");}
	   if(i != row && j!= col && i+j >7 )
		 {printf("@\t");}
	}
	
	  
	printf("\n");
  }
}
/////////////////////////////////
/*
void display(int row, int col)
{
 int i =0 , j=0;
 
 for(i = 1; i<= row; i++)
 {
   for(j = 1; j<=col; j++)
    {
	  if(i<= j)
		printf("%d \t" ,j);
	  else 
		printf("  \t" ,j);
	}
	
	  
	printf("\n");
 }
}
*///////////////////////////////////////////
/*
void display(int row, int col)
{
 int i =0 , j=0;
 
 for(i = 1; i<= row; i++)
 {
   for(j = 1; j<=col; j++)
    {
	  if(i + j == 5)
		printf("#\t");
	  else if(i + j < 5)
		printf("*\t");
	  else if(i + j > 5)
		printf("@\t");
	}
	
	  
	printf("\n");
 }
}
*/////////////////////////////////////////////

 int main()
{
int irow =0 , icol =0;
printf("enter no. of rows :");
scanf("%d", &irow);

printf("enter no. of cols :");
scanf("%d", &icol);

display(irow, icol);

return 0;
}