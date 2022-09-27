#include <stdio.h>
void display()
{
    int irow=3 , icol=3;
    int i=0 , j=0;
    for(i=1; i<=irow; i++)
    {
        for(j=1; j<=icol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    
}




int main()
{
    display();

    return 0;
}
