#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
/*
int result(int *brr, int ilength)
{
 int i =0, seven =0, sodd=0, idiff=0;

 printf("enter %d numbers :\n",ilength);
 for(i =0; i<ilength; i++)
 {  
    
	scanf("%d",&brr[i]);
   
   {
    if(brr[i]%2 == 0)
      {seven = seven + brr[i];}
    else
      {sodd = sodd + brr[i];}
   }
 } 
 
 idiff = seven - sodd;
 return idiff;

}
*///////////////////////////////////////////////
/*
void display(int *brr, int isize)
{
	int i = 0;
	
	printf("enter %d elements : \n", isize);
	
	for(i=0; i< isize; i++)
	{
	 scanf("%d",&brr[i]);
    }
	for(i=0; i< isize; i++)
	{
		//if(brr[i]%5 == 0 && brr[i]%3 ==0)
		if(brr[i]%11 ==0)
		printf("%d\t",brr[i]);
	}
	
	
}
*//////////////////////////////////////////////////
/*
int frequency(int *brr, int ilength)
{
 int i =0, ecnt =0, ocnt=0;

 printf("enter %d numbers :\n",ilength);
 for(i =0; i<ilength; i++)
 {  
    
	scanf("%d",&brr[i]);
   
   {
    if(brr[i]%2 == 0)
      {ecnt++;}
    else
	  {ocnt++;}
   }
 } 
 return ecnt-ocnt;

}
*////////////////////////////////////////////////////

/*
int frequency(int *brr, int ilength,int no)
{
 int i =0, icnt=0;
 


 printf("enter %d numbers :\n",ilength);
 for(i =0; i<ilength; i++)
 {  
    
	scanf("%d",&brr[i]);
   
   {
    if(brr[i] == no)
      {icnt++;}
    
   }
 } 
 return icnt;

}

*/

bool check(int *brr, int ilength)
{
 int i =0;

 printf("enter %d numbers :\n",ilength);
 for(i =0; i<ilength; i++)
 {  
    
	scanf("%d",&brr[i]);
   
   {
    if(brr[i] == 11)
      {return true;}
    else
	  {return false;}
   }
 } 
 

}


/*
int main()
{
 int ilength =0,iret = 0, ino =0;
 
 printf("enter a no. : \n");
 scanf("%d", &ino);
 
 
 printf("enter no of elements : \n");
 scanf("%d", &ilength);
 
 int *arr = NULL;
 
 arr = (int*)malloc(sizeof(int)*ilength);  //allocte
 printf("memory of %d bytes allocated successfully \n.",sizeof(int)*ilength);
 
/*
 iret = result(arr,ilength);  //use mem
  if(iret = -iret)
  {iret == -1 * (iret);}
 
 printf("the result is : %d\n", iret);
 */
 
// display(arr,ilength);
/*
 iret = frequency(arr,ilength, ino);  //use mem
  
 
 printf("the result is : %d\n", iret);

 free(arr); //free
 printf("memory freed!!\n");
 return 0;
}
*///////////////////////////////////////////////////////////////////////////////

int main()
{
 int ilength =0;
 bool bret = FALSE;
  
 printf("enter no of elements : \n");
 scanf("%d", &ilength);
 
 int *arr = NULL;
 
 arr = (int*)malloc(sizeof(int)*ilength);  //allocte
 printf("memory of %d bytes allocated successfully \n.",sizeof(int)*ilength);
 
 bret = check(arr, ilength);
 
 if(bret == TRUE)
 {
	 printf("11 is present\n");
 }
 else
 {
    printf("11 is absent\n");
 } 
 return 0;
}