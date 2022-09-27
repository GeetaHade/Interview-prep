#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/*
float display(int *brr, int size)
{
 int i= 0, isum = 0, icnt = 0;
 float res = 0.0;
 
  printf("enter the elements: \n");
 for(i=0; i<size; i++)
 {
   scanf("%d",&brr[i]);
   
   icnt++;
   isum = isum + brr[i];
   
   
   //printf("%d,%d", isum,icnt);
 }
  
 return  res = (float)isum/(float)icnt;
}
*////////////////////////////////////////////////////////////

/*

int count(int *brr, int size)
{
 int i= 0, icnt = 0;

 
  printf("enter the elements: \n");
 for(i=0; i<size; i++)
 {
   scanf("%d",&brr[i]);
   
   if(brr[i] > 10 && brr[i] < 20)
   {icnt++;}
 }
 return icnt;
    
 }
 */////////////////////////////////////////////////////////
 /*
 int max(int *brr, int size)
{
 int i= 0, j=0, icnt = 0, max = 0;

 
  printf("enter the elements: \n");
 for(i=0; i<size; i++)
 {
   scanf("%d",&brr[i]);
 }
 for(i=0; i<size; i++)
 {
   for(j=i+1; j<size; j++)
   {
	 if(brr[i]>brr[j])
	 {max = brr[i];}
     else
	 {max = brr[j];}
   
   }
 }
 return max;
    
 }
 *////////////////////////////////////////////////////////////////////////
 /*
 int max(int *brr, int size)
{
 int i= 0, icnt = 0, imax = 0, imin = 0;

  imax = brr[0];
  imin = brr[0];
  
 for(i=0; i<size; i++)
 {
   
   if(brr[i] > imax)
    {imax = brr[i];}
   else
   {imin = brr[i];}
 }
   
 
 
 return imax - imin;
    
 }
 *////////////////////////////////////////////////////////////////////
 /*
 bool check(int *brr, int size,int ino)
{
 int i= 0, copy = 0;
  copy = ino;
  bool bret = 0;
  
 //for(i=0; i<size; i++)
 
 for(i=size-1; i>=0; i--)
 {
   if(brr[i] == copy)
   { bret = 1;
     printf(" element is found at %d",i);
     break;
	}
   else
   {bret = 0;}
 }
   
  return bret; 
 }*///////////////////////////////////////////////////
 
 bool check(int *brr, int size,int ino)
{
 int i= 0, copy = 0, index = 0;
  copy = ino;
  bool bret = 0;
  
 for(i=0; i<size; i++)
 
 {
   if(brr[i] == copy)
   { bret = 1;
     index = i; 
	 
   }
   else
   {bret = 0;}
   
 }
   printf(" element is found at %d",index);
  return bret; 
}
 
int main()
{
int ilength = 0, /*iret = 0,*/ i = 0, no = 0;
int *arr = NULL;
//float fret = 0.0;
bool bret = 0;

printf("enter number :\n ");
scanf("%d", &no);


printf("enter number of elements :\n ");
scanf("%d", &ilength);

arr = (int*)malloc(sizeof(int)*ilength);
printf("memory allocated successfully\n");

printf("enter the elements: \n");
for(i=0; i<ilength; i++)
 {
	 scanf("%d",&arr[i]);
 }

//fret = display(arr,ilength);
//printf("result is %0.2f \n",fret);

//iret = max(arr,ilength);
//printf("result is %d \n",iret);

bret = check(arr,ilength, no);
printf("result is %d \n",bret);

if(bret == 1)
{
	printf("no is present\n");
}
else{
	printf("no is absent");
}

free(arr);
printf("memory freed!! \n");
return 0;
}