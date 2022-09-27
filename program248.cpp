#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
}NODE, *PNODE, **PPNODE;

void Insert(PPNODE Head, int no) //call by add so take temp to travel
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else   //unconditional loop(while1(while true) break loop stop)
    {
        PNODE temp = *Head;

        while(true)     //while(1)  //unconditional  for(;;)
        {
            if(temp->data == no)
            {
                cout<<"Duplicate node\n";
                delete newn;  //memry leakage avoid
                break;
            }
            else if(temp->data > no)   //(left)small data
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;   //tasa nasel tr left la ja
            }
            else if(temp->data < no)   //(rght)motha data
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
            }
        }
    }
}

bool search(PNODE Head, int no)
{
    //bool flag = false;
    if(Head == NULL)  //if tree is empty
    {
        return false;
    }
    else    //tree contains atleat one node
    {
        while(Head != NULL)
        {
            if(Head->data == no)   //node sapadla
            {
                //flag = true;
                break;
            }
            else if(no > (Head->data))
            {
                Head = Head->rchild;  //(left travel)
            }
            else if(no < (Head->data))
            {
                Head = Head->lchild; //(rght travel)
            }
        }
    if(Head == NULL)
    {return false;}
    else
    {return true;}
    }
}

int count(PNODE Head)
{
    static int icnt = 0;  //value preserve

    if(Head != NULL)
    {
        icnt++;
        count(Head->lchild);
        count(Head->rchild);
    } 
    return icnt;
}

int countLeaf(PNODE Head)
{
    static int icnt = 0;  //value preserve

    if(Head != NULL)
    {
        ((Head->lchild == NULL) && (Head->rchild == NULL))
        {
         icnt++;
        }
        countLeaf(Head->lchild);
        countLeaf(Head->rchild);
    } 
    return icnt;
}

int countParent(PNODE Head)
{
    static int icnt = 0;  //value preserve

    if(Head != NULL)
    {
        if((Head->lchild != NULL)||(Head->rchild != NULL))
        { icnt++; }
        countParent(Head->lchild);
        countParent(Head->rchild);
    } 
    return icnt;
}

void inorder(PNODE Head)
{
    if(Head != NULL)
    {
        inorder(Head->lchild);  //ll
        cout<<Head->data<<"\n";
        inorder(Head->rchild);  //rr
    }
}



int main()
{
    int no = 0, iret=0;
    bool bret = NULL;

    PNODE first = NULL;
    Insert(&first,51);   //root node
    Insert(&first,21);
    Insert(&first,101);

    cout<<"enter no to be searched\n";
    cin>>no;

    bret = search(first,no);
    if(bret == true)
    {
        cout<<"data is present\n";
    }
    else
    {
        cout<<"data is not there\n";
    }

    iret = countLeaf(first);
    cout<<"no.of leaf nodes are:"<<iret;

    cout<<"inorder\n";
    inorder(first);

    cout<<"preorder\n";
    preorder()

    return 0;
}