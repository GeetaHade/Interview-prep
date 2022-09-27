#include<iostream>
using namespace std;

void DisplayI()  //iteration
{
 int icnt = 1;  //auto storage cha temp meme aste 1-2, 1-2 , 1-2

 while(icnt <= 4)
 {
     cout<<"Marvellous\n";
     icnt++;
 }
}

void DisplayR()  //recursion chya code mdhe no loop
//recursion code mdhe no auto storage variable use **static variable
{  
    //jr static kadhla tr infinite (nhi loop)--core dump os pm krte 

    static int icnt = 1; //1-2, 2-3, 3-4  ...

    if(icnt <= 4)
 {
     cout<<"Marvellous\n";
     icnt++;
     DisplayR();   //function calling itself
 }
}

int main()
{
  DisplayR();

  return 0;
}