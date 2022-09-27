
#include<stdio.h>
/*
void display(int row, int col)
{
 int i = 0, j=0;
 
 for(i=1; i<=row; i++)
  {
   for(j =1; j<=col; j++)
   {
    if(j>i)
	  {printf("# \t");  }
	else
	   {printf("* \t");  }
   }
   printf("\n");
  
  }

}
*////////////////////////////////////////////////////
/*
void display(int row, int col)
{
 int i = 0, j=0;
 
 for(i=1; i<=row; i++)
  {
   for(j =1; j<=col; j++)
   {
    if(i+j >=6)
	 {printf("#\t");}
     else
	 {
		 printf("*\t");
	 }
   }
   printf("\n");
  
  }

}
*/////////////////////////////////////////////////////
/*

void display(int row, int col)
{
 int i = 0, j=0;
 
 for(i=1; i<=row; i++)
  {
   for(j =1; j<=col; j++)
   {
    if(i == j)
	 {printf("$\t");}
     else
	 {
		 printf("*\t");
	 }
   }
   printf("\n");
  
  }

}
*////////////////////////////////////////////////////////
/*
void display(int row, int col)
{
 int i = 0, j=0;
 
 for(i=1; i<=row; i++)
  {
   for(j =1; j<=col; j++)
   {
    if(i ==1 || j==1 || i == row || j == col)
	 {printf("*\t");}
     else
	 {
		 printf("@\t");
	 }
   }
   printf("\n");
  
  }

}

*/////////////////////////////////////////////////////////

/*
void display(int row, int col)
{
 int i = 0, j=0;
 
 for(i=1; i<=row; i++)
  {
   for(j =1; j<=col; j++)
   {
    if(i ==1 || j==1 || i == row || j == col)
	 {printf("%d \t",j);}
     else
	 {
		 printf("*\t");
	 }
   }
   printf("\n");
  
  }

}
*/////////////////////////////////////////////////////////////


void display(int row, int col)
{
 int i = 0, j=0;
 
 for(i=1; i<=row; i++)
  {
   for(j =1; j<=col; j++)
   {
    if(i<=j)
	
	 {
		 printf("%d\t",j);
	 }
   }
   printf("\n");
  
  }

}
/*//////////////////////////////////////////////////////////////////

/*
void display(int row, int col)
{
 int i = 0, j=0;
 
 for(i=1; i<=row; i++)
  {
   for(j =1; j<=col; j++)
   {
    if(i>j)
	
	 {
		 printf("#\t");
	 }
	else if(i==j)
	  {
		 printf("$\t");
	  }
	else 
	  {
		 printf("*\t");
	  }
	
   }
   printf("\n");
  
  }

}
*////////////////////////////////////////////////////////
/*
void display(int row, int col)
{
 int i = 0, j=0;
 
 for(i=1; i<=row; i++)
  {
   for(j =1; j<=col; j++)
   {
    if((i ==1) || (i == row) || (j == 1) || (j == col) || (i == j) )
	 {printf("* \t");}
    
   }
   printf("\n");
  
  }

}
*/////////////////////////////////////////////////////////////



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