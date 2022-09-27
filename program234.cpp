#include<iostream>
using namespace std;

int sum(int ino)
{
    int isum = 0;
    while(ino != 0)
    {
        isum =isum + (ino %10);
        ino = ino/10;
    }
    return isum;
}

int sumR(int ino)
{
    static int isum = 0;
    if(ino != 0)
    {
        isum =isum + (ino %10);
        ino = ino/10;
        sumR(ino);  //here function returns value but we dont catch here like printf scanf return value we dont catch it
        
    }
    return isum;
}

int main()
{
    int x = 0, iret = 0;
    cout<<"enter no.\n";
    cin>>x;

    iret = sumR(x);

    cout<<"summation of digits:"<<iret<<"\n";
    return 0;
}