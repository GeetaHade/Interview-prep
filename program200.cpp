//swap 1 and last byte  abcd == dbca

#include<iostream>
using namespace std;
typedef unsigned int UINT; 


UINT swapbyte(UINT ino)
{
    UINT imask =  0X00FFFF00; //madhle 2 byte band sathi & kelyavr
    UINT itemp = ino & imask;
    UINT byte1 = ino << 24;
    UINT byte4 = ino >> 24;
   UINT iresult = itemp | byte1 |byte4;
   return iresult;
 
}
int main()
{
    UINT ivalue = 0, iret = 0, i=0, j=0;

    cout<<"enter number\n";
    cin>>ivalue;

    iret = swapbyte(ivalue);

    cout<<"updated number is: "<<iret<<"\n";

    return 0;
}
//byte slicing he asta
