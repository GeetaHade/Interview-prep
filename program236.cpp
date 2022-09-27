#include<iostream>
using namespace std;

int sumi(int Arr[], int isize)
{
    int isum = 0, i = 0;       //while(i<isize)
                                  //{ isum = isum + Arr[i]
    for(i=0; i<isize; i++)        //i++;}
    {
        isum = isum + Arr[i];
    }
    return isum;
}

int sumR(int Arr[], int isize)
{
    static int isum = 0, i = 0;       
    
    if(i<isize)
    { 
        isum = isum + Arr[i];
        i++;
        sumR(Arr,isize);  //(doubt y not arr[])
    }
    return isum;
}

int main()
{
    int ilength =0, i=0, iret =0;
    int *p = NULL;

    cout<<"enter no. of elements:\n";
    cin>>ilength;

    p = new int[ilength];  //memry allocation

    cout<<"enter elements";

    for(i = 0; i< ilength; i++)
    {
        cin>>p[i];
    }

    iret = sumR(p,ilength);
    cout<<"addition is:"<<iret<<"\n";
    delete []p;
    return 0;
}