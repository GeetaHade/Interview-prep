#include <stdio.h>
void displaybinary(int ino)
{
    int idigit=0;
    while(ino!=0)
    {
        idigit = ino%2;
        printf("%d\t",idigit);
        ino=ino/2;
    }
}

int main()
{ int ivalue=0;
  printf("enter number\n");
  scanf("%d",&ivalue);
  
  displaybinary(ivalue);

    return 0;
}
