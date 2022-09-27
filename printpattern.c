//////////////////////////////
//accept a no and display that no of stars
//input : 4
//output : ****
//there r three programing paradigms:
//sequence : writing program line by line 
//selection : select one from multiple things (if, else if or switch case) 
//iterations : loops i.e repeting same set of instructions (for, while, do while) 

//printf scantf chi defination are in libc.lib mdhe astat and declaration stdlib mdhe astat
#include<stdio.h>

void printpatern(int ino)
{
   int icnt = 0;
   for(icnt = 0; icnt < ino; icnt++)
   {
     printf(" *");
   }
}

int main()
{

int ivalue = 0;
printf(" enter the number : \n");
scanf("%d",&ivalue);

printpatern(ivalue);


return 0;
}