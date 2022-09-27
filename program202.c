#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE; 

int main()
{ NODE obj; //12 bytes  struct node cha obj static allocation
  obj.data = 11;
  obj.next = NULL;

  PNODE p = NULL; //8 bytes
  p = &obj;

  PPNODE q = NULL; //8 bytes doble pt
  q = &p;

    return 0;
}