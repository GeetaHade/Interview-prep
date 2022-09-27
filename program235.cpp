#include<iostream>
using namespace std;

int factorial(int ino)

{
    int ifact = 1;
    while(ino != 0)
    {
    ifact = ifact * ino;
    ino--;
    }
    return ifact;
}

int factorialR(int ino)

{
    static int ifact = 1;
    if(ino != 0)
    {
    ifact = ifact * ino;
    ino--;
    factorialR(ino);
    }
    return ifact;
}

int main()

{
    int x =0, iret = 0;

    cout<<"enter no.\n";
    cin>>x;

    iret = factorialR(x);

    cout<<"fact is :"<<iret<<"\n";
    return 0;
}