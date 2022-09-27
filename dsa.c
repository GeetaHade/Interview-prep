#include <stdio.h>
#include <stdlib.h>


struct node
{
 int data;
 struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


void Insertfirst(PPNODE head, int no )
{
PNODE newn = NULL;

//create node
newn = (PNODE)malloc(sizeof(NODE));

//initialize
newn->data = no;
newn->next = NULL;

//insert
if(*head == NULL)
{
  *head = newn; 
}
else
{
 newn->next = *head;
 *head = newn;
}

}

void Insertlast(PPNODE head, int no)
{
 PNODE newn = NULL;
 PNODE temp = *head;//100
 
 //create
 newn = (PNODE)malloc(sizeof(NODE));
 
 //initialize
 newn->data = no;
 newn->next = NULL;

//insert
if(*head == NULL)
 {
 *head = newn;
 }
else
{
  while(temp->next != 0)
 {
  temp = temp->next;
 }
temp->next = newn;
}

}

int count(PNODE);


void InsertAtPos(PPNODE head, int no, int pos)
{
  PNODE newn =NULL;
  PNODE temp = *head;

  int size = count(temp);
  int i =0 ;
  
  if((pos < 1) || (pos > size + 1)) 
  {
	printf("invalid position");
	return;
  }
  if(pos == 1)  //pos1
  {
	Insertfirst(head,no);
	
  }
  else if(pos == size+1)//pos last
  {
	Insertlast(head,no);
	
  }
 //in betn
 else{
	 
	newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	 
	for(i=1; i<pos-2 ; i++)
	{
	 temp = temp->next;
	}
	newn->next = temp->next;
	temp->next = newn;
	
	
 }

}





void Display(PNODE head)
{
while(head != NULL)//100 //head->next asta tr 400 lch thambel
{

printf("|%d|->",head->data);
head = head->next;

}
}

int count(PNODE head)
{
int icnt = 0;

while(head != NULL)
{
head = head->next;
icnt++;
}
return icnt;
}


void Deletefirst(PPNODE head)
{
 PNODE temp = *head;
 
 if((*head)->next != NULL)
 {
	*head = (*head)->next; //error cuz of bracket
	free(temp);
 }
}

void DeleteLast(PPNODE head)
{
	PNODE temp = *head;
	//emty
  if(*head == NULL)
  {
	printf("it is empty");
	return;
  }
  else if((*head)->next == NULL)  //only one
  {
	free(*head);
	*head = NULL;
  }
	//more then one
   else{
	   while(temp->next->next != NULL)
	   {
		 temp = temp->next;
	   }
	   free(temp->next);
	   temp->next = NULL;
	   
   }
	
}


/*


void DeleteAtPos(PPNODE head, int ipos)

int count(PNODE head);
*/




int main()
{

PNODE first = NULL;

Insertfirst(&first,16);
Insertfirst(&first,101);
Insertfirst(&first,51);
Insertfirst(&first,21);
Insertfirst(&first,12);
Insertlast(&first,111);
Insertlast(&first,222);

//Display(first);

Deletefirst(&first);
//Display(first);

DeleteLast(&first);
//Display(first);

InsertAtPos(&first,88,2);

Display(first);




return 0;
}