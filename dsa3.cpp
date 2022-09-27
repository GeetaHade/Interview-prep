//SLL in cpp

#include<iostream>
 using namespace std;
 
 
 #define TRUE 1
 #define FALSE 0
 
 typedef int BOOL;
 //struct
 
 struct node
 {
  int data;
  node *next;
 };
 typedef struct node NODE;
 typedef struct node* PNODE;
 
 
 class SinglyLL
 {
  //characteristics
  private:
  PNODE head;
  int size;
   
   //behaviour
   public:
   SinglyLL();
   //~SinglyLL();
   BOOL InsertFirst(int);
   BOOL InsertLast(int);
   BOOL InsertAtPos(int, int);
  /* BOOL DeleteFirst();
   BOOL DeleteLast();
   BOOL DeleteAtPos();*/
   void display();
   
 };
 
 SinglyLL::SinglyLL()  //constructor **return type invalid!!
 {
  head = NULL;
  size = 0;
 }
 
 BOOL SinglyLL:: InsertFirst(int no)
 {
        //allocate
    PNODE newn = NULL;
 
    newn = new NODE;
 
    if(newn == NULL)
   {
   return FALSE;
   }
 
       //initialize
    newn->data = no;
    newn-> next = NULL;
    //insert
    //empty??
   if(head == NULL)
  {
   head = newn;
  }
   //not emty??
   else
  {
    newn->next = head;
    head = newn;
  }
  
  size++;
 return TRUE;
 }
 
BOOL SinglyLL::InsertLast(int no)
{
	PNODE temp = head;
	PNODE newn = NULL;	//allocate
	
	newn = new NODE;
	if(newn == NULL)
	{
		return FALSE;
	}
	newn->next = NULL;
	newn->data = no;	//init
    

    if(head == NULL)		//insrt
	{
		head = newn;
	}
	else
	{
	 while(temp->next != NULL) //error-->> temp->next
	 {
		temp = temp->next;
	 }
	 temp->next = newn;
		
	}
	size++;
return TRUE;	
	
	
}


BOOL SinglyLL::InsertAtPos(int no, int pos)
{
PNODE newn = NULL, temp = head;
int i = 0;

newn = new NODE;   //alloc

newn->data = no;  //ini
newn->next = NULL;

if(pos < 0 || pos > size+1 || newn ==NULL)
{
	return FALSE;
}

if(pos == 1)
{
	InsertFirst(no);
	size++;
}
else if(pos == size+1)
{
	InsertLast(no);
	size++;
}

else
{
  for(i =1; i < (pos-1); i++)	
  {
	temp = temp->next;
  }
  newn->next = temp->next;
  temp->next = newn;
  size++;
}
	
return TRUE;
}
 
 
 
void SinglyLL:: display()
{
 PNODE temp = head;
 
 while(temp != NULL)
 {
  cout<<"|"<<temp->data<<"|"<<"->";
  temp = temp->next;
 }

}
 
 int main()
 {
  SinglyLL obj;
  
  obj.InsertFirst(11);
  obj.InsertFirst(12);
  obj.InsertFirst(13);
  obj.InsertLast(10);
  obj.InsertLast(111);
  obj.InsertAtPos(33,3);
  obj.InsertAtPos(969,5);
  
  obj.display();
 
 return 0;
 }