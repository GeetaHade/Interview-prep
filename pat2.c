#include <stdio.h>
void display(int irow, int icol)
{ int i=0, j=0;
    
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
{int irow=0 , icol=0;
    int i=0 , j=0;
	printf(enter rows n cols:);
    sacnf("%d,%d",&irow,&icol);
    display();

    return 0;
}
