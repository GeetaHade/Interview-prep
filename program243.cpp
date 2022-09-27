#include<iostream>
#include<stdio.h>

using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void Insertfirst(PPNODE Head, int no)
{
    PNODE newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        cout<<"|"<<Head->data<<"|";
        Head = Head->next;
    }
    cout<<"\n";
}

void DisplayR(PNODE Head)
{
    if(Head != NULL)
    {
        cout<<"|"<<Head->data<<"|->";
        Head = Head->next;
        DisplayR(Head);
    }
    cout<<"\n";
}

int  count(PNODE Head)
{
    int icnt = 0;

    while(Head != NULL)
    {
        icnt++;
        Head = Head->next;
    }
    return icnt;
}

int  countR(PNODE Head)
{
    static int icnt = 0;

    if(Head != NULL)
    {
        icnt++;
        Head = Head->next;
        countR(Head);
    }
    return icnt;
}

int main()
{
    PNODE first =NULL;

    Insertfirst(&first,101);
    Insertfirst(&first,10);
    Insertfirst(&first,11);

    Display(first);
    
    return 0;

}