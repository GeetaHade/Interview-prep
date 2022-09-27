#include<stdio.h>
#include<stdlib.h>

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
 int i =0, iret = 0, ilength = 0 ;
 printf("total no of elements : ");
 scanf("%d",&ilength);
 int *arr = NULL;  //macro
 
 arr = (int*)malloc(sizeof(int)*ilength); //allocate
 printf("memory of %d bytes allocated successfully \n.",sizeof(int)*ilength);
 

 iret = Addition(arr,ilength);  //use
 
 printf("sum is %d\n",iret);
 
 free(arr);
 printf("memory freed!!");
 return 0;
}