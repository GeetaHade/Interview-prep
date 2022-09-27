#include<stdio.h>

int Addition(int brr[], int size)   //int Addition(int *brr)
{ 
   int i =0, isum =0 ;
	
   printf("enter %d elements : ",size);
   for(i=0; i<size; i++)
  {
   scanf("%d",&brr[i]);
   isum = isum + brr[i];
  }
 return isum;
}


int main()
{
 int i =0, iret = 0, isize =0 ;
 printf("total no of elements : ");
 scanf("%d",&isize);
 int arr[isize];
 iret = Addition(arr,isize);
 

 printf("sum is %d",iret);
 
 
 return 0;
}