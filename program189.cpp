#include<iostream>
using namespace std;
 int countbit(int ino)
 {
     int i = 0, icnt=0, iresult=0;
     int imask = 0x00000001;
     for(i = 1; i<32 ; i++)
     {//time complexity kmi kr..5 bit no. 0 asle tr dont go there
         iresult = ino & imask;
         if(iresult != 0)
         {
             icnt++;
         }
         imask = imask << 1;  //= *must for updation 
         //imask << 1; imask update ram vrch rahnar khi change honar nhi
     }
     return icnt;

 }

 int main()
 {  
     int ivalue = 0, iret = 0;
     cout<<"enter number\n";
     cin>>ivalue;

     iret = countbit(ivalue);

     cout<<"number of bits which are on :"<<iret <<"\n";
     
     return 0;
 }