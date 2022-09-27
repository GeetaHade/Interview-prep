//non linear pattern..
/*
input - irow = 3, icol = 
output:
* * * *
* * * *
* * * *

*/

#include<stdio.h>

void display(int row, int cols)
{
int icnt = 0, i = 0;

for(i = 1; i <=row; i ++)
 {
    for(icnt = 1; icnt<=cols; icnt++)      
   { 
    printf("* \t");
   }
   printf("\n");
 }
}

int main()
{
int irow = 0, icol = 0;
printf("enter no of rows : ");
scanf("%d", &irow);

printf("enter no of cols : ");
scanf("%d", &icol);

display(irow, icol);

return 0;
}




  