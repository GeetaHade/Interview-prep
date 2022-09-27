#include<iostream>
using namespace std;

void DisplayI(int ino)  //iteration
{
 int icnt = 1;  //auto storage cha temp meme aste 1-2, 1-2 , 1-2

 while(icnt <= ino)
 {
     cout<<"Marvellous\n";
     icnt++;
 }
}

void DisplayR(int ino)  //iteration
{
 static int icnt = 1;  //auto storage cha temp meme aste 1-2, 1-2 , 1-2

 if(icnt <= ino)
 {
     cout<<"Marvellous\n";
     icnt++;
     DisplayR(ino);
 }
}

//stackframe 7  -6 display  -1 main

int main()
{
  int i =5;
  //DisplayI(i);
  DisplayR(i);

  return 0;
}