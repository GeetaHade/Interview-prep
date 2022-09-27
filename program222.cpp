//genric syntax java cpp same
#include<iostream>
using namespace std;

//specific function
void swap(char *p, char *q)
{
    char temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

//gneric fuction
template<class T>
void swapX(T *p, T *q)

{
    T temp;

    temp = *p;
    *p = *q;
    *q = temp;
}


int main()
{ 
    char x = '\0', y = '\0';

    cout<<"enter 1st no\n";
    cin>>x;

    cout<<"enter 2nd no\n";
    cin>>y;

    swapX(&x,&y);  //swap(100,200) call by add

    cout<<"value of X becomes:"<<x<<"\n";
    cout<<"value of Y becomes:"<<y<<"\n";
    return 0;
}
