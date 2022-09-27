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

int Togglebit(int ino, int ipos)
{
  int imask = 0x00000001;
  int iresult = 0;

  if((ipos < 1) || (ipos > 32))
  {
      return 0;
  }
  imask = imask << (ipos -1);

  iresult = ino ^ imask; //toggle krnya sthi or use kelay

  return iresult;
}
int main()
{
    int ivalue = 0, iret = 0, i=0;

    cout<<"enter number\n";
    cin>>ivalue;

    cout<<"enter the position of bit\n";
    cin>>i;

    iret = Togglebit(ivalue,i);

    cout<<"updated number is: "<<iret<<"\n";

    return 0;
}