//linked list problem...
//fing no which is not repeated twice...
//logic bitwise operator..xor...1^1 = 0...2^2 =0
#include<stdio.h>

int main()
{
int arr[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5,};
int iret = 0;

for(int i=0; i<9; i++)
{
	iret = iret ^ arr[i];
}

	printf("%d",iret);







return 0;
}

