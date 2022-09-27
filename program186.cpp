#include<iostream>
using namespace std;

class Marvellous
{
  public: 
       int Addition(int x, int y)
       {
           int ians = 0;
           ians = x + y;
           return ians;
       }
};
int main()
{
    int ino1 = 0, ino2 = 0, iret = 0;
    Marvellous mobj;  //Marvellous mobj = new Marvellous()

    cout<<"enter first number\n";
    cin>>ino1;

    cout<<"enter second number\n";
    cin>>ino2;
    
    iret = mobj.Addition(ino1 + ino2);

    cout<<"addition is: "<<iret<<"\n";
    return 0;
}