///////
//intput : N=6 arr[] = {2,3,1,5,4}
//output : 6

#include<iostream>
using namespace std;

int rearrange(int arr[], int n)
{
int i = 0, temp = 0, icnt = 0;

for(i = 0; i<n; i++)
 {
   temp = arr[i];
   if(temp > arr[i+1] || temp < arr[i-1])
  {
  std :: swap(arr[i], arr[i+1]);
  icnt ++;
 
 }
 
}

return icnt;
}

int main()
{
int iret = 0, n = 5;
int arr[] = {2,3,1,5,4};

iret = rearrange(arr,n);
printf("no of attemps are :  %d ",iret);
return 0;

}