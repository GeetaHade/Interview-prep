#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


void Insertfirst(PPNODE head, int no)
{
	//create
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	//initi
	newn->data = no;
	newn->next = NULL;
	//insert
	//empty
	if(*head == NULL)
	{
	 *head = newn;
	}
	else      //not empty
	{
	  newn->next = *head;
	  *head = newn;
	}
	
}

void display(PNODE head)
{
	while(head != NULL)
	{
		
		printf("->||%d||",head->data);
		head = head->next;
	}
}

/*
void count(PNODE head, int no)
{
	int icnt = 0;
	while(head != NULL)
	{
		icnt++;
		head = head->next;
		if(head->data == no)
		{
			icnt++;
			break;
		}
		
	}
	printf("first occurance of %d : %d \n ", no,icnt);
}

/////////////////////////////////////////////////////////////////////////////////////////////////*/
/*
void count(PNODE head)
{
	int sum = 0;
	while(head != NULL)
	{
		sum = sum + head->data;
		head = head->next;
			
	}
	
	printf("sum of SLL is %d", sum);
}
/////////////////////////////////////////////////////////////*/

int MAX(PNODE head)
{
	int max = head->data;
	while(head != NULL)
	{
	    head = head->next;
		if(max > head->data)
		{
			max = head->data;
			break;
		}
			
	}
	
	return max;
}

int MIN(PNODE head)
{
	int min = head->data;
	while(head != NULL)
	{
	    head = head->next;
		if(min < head->data)
		{
			min = head->data;
			break;
		}
			
	}
	
	return min;
}






int main()
{
 PNODE first = NULL;
 int iret = 0;
 
 Insertfirst(&first,70);
 Insertfirst(&first,60);
 Insertfirst(&first,50);
 Insertfirst(&first,40);
 Insertfirst(&first,30);
 Insertfirst(&first,50);
 Insertfirst(&first,10);

 display(first);
 //count(first,50);
 
 //count(first);
 iret = MAX(first);
 printf("sum of max is %d\n", iret);
 
 iret = MIN(first);
 printf("sum of min is %d\n", iret);
 
 
 return 0;
}