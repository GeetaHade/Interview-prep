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
//dont initialize any temp variable cuz tyalach mahit nhi to kon e
{
    T temp;

    temp = *p;
    *p = *q;
    *q = temp;
}


int main()
{ 
    char x = 'A', y = 'B';

  swapX(&x,&y);
  cout<<"value of X becomes:"<<x<<"\n";
    cout<<"value of Y becomes:"<<y<<"\n";


    int i=11, j = 21;
    swapX(&i,&j);  //swap(100,200) call by add

    cout<<"value of X becomes:"<<i<<"\n";
    cout<<"value of Y becomes:"<<j<<"\n";
    return 0;
}
