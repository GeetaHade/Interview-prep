#include<iostream>
using namespace std;
//typedef unsigned int UINT; //all bits accessable for int 1 bit reserved

/*
oop1 oop2 & | ^
1     0   0 1 1
0     1   0 1 1
1     1   1 1 0
0     0   0 0 0
*/

// ino 0000 0000 1110 0100 1111 0100 1011 1010
//ipos 6
//iret 0000 0000 1110 0100 1111 0100 1001 1010

int Togglebit(int ino, int ipos1, int ipos2)
{
  int imask1 = 0x00000001;
  int imask2 = 0x00000001, imask = 0;
  int iresult = 0;

 /* if((ipos < 1) || (ipos > 32))
  {
      return 0;
  }*/
  imask1 = imask1 << (ipos1 -1);
  imask2 = imask2 << (ipos2 - 1);

  imask = imask1 | imask2;  //club mask  2 position at a time


  iresult = ino ^ imask; //toggle krnya sthi or use kelay

  return iresult;
}
int main()
{
    int ivalue = 0, iret = 0, i=0, j=0;

    cout<<"enter number\n";
    cin>>ivalue;

    cout<<"enter the 1 position of bit\n";
    cin>>i;
     cout<<"enter the 2 position of bit\n";
    cin>>j;

    iret = Togglebit(ivalue,i,j);

    cout<<"updated number is: "<<iret<<"\n";

    return 0;
}