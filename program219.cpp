//genric syntax java cpp same
#include<iostream>
using namespace std;

void swap(int *p, int *q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{ 
    int x = 0, y = 0;

    cout<<"enter 1st no\n";
    cin>>x;

    cout<<"enter 2nd no\n"
    cin>>y;

    swap(&x,&y);  //swap(100,200) call by add

    cout<<"value of X becomes:"<<x<<"\n";
    cout<<"value of Y becomes:"<<y<<"\n";
    return 0;
}
