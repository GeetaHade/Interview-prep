#include<iostream>
using namespace std;
//#include <cstddef>

template<typename T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};
//template ha typedef mdhe convert hot nhi so remove typedef

template <class T>
class SinglyLL
{
private:
    node <T>* first;
    int size;
    
public:
    SinglyLL();
    void InsertFirst(T);
    void InsertLast(T);
    void InsertAtPos(T , int);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int);
    void Display();
    int Count();
};
template <class T>
 SinglyLL<T>::SinglyLL()
   {
       first = NULL;
       size = 0;
   }

 template <class T>  
   void SinglyLL<T>::InsertFirst(T no)
   {
       node <T>* newn = new node<T>;  // newn = (PNODE)malloc(sizeof(NODE))
       
       newn->data = no;
       newn->next = NULL;
       
       if(first == NULL)
       {
           first = newn;
       }
       else
       {
           newn->next = first;
           first = newn;
       }
       size++;
   }

 template <class T>  
   void SinglyLL<T>::InsertLast(T no)
   {
       node <T>* newn = new node<T>;  // newn = (PNODE)malloc(sizeof(NODE))
       
       newn->data = no;
       newn->next = NULL;
       
       if(first == NULL)
       {
           first = newn;
       }
       else
       {
           node <T>* temp = first;
           
           while(temp->next != NULL)
           {
               temp = temp->next;
           }
           temp->next = newn;
       }
       size++;
   }

 template <class T>  
   void SinglyLL<T>::InsertAtPos(T no, int ipos)
   {}

template <class T>   
   void SinglyLL<T>::DeleteFirst()
   {
       node <T>* temp = first;
       
       if(first != NULL)
       {
           first = first->next;
           delete temp;
           
           size--;
       }
   }

template <class T>   
   void SinglyLL<T>::DeleteLast()
   {
       node <T>* temp = first;
       
       if(first == NULL)
       {
           return;
       }
       else if(first->next == NULL)
       {
           delete first;
           first = NULL;
           size--;
       }
       else
       {
           while(temp->next->next != NULL)
           {
               temp = temp->next;
           }
           
           delete temp->next;
           temp->next = NULL;
           size--;
       }
   }

 template <class T>  
   void SinglyLL<T>::DeleteAtPos(int ipos)
   {}

 template <class T>  
   void SinglyLL<T>::Display()
   {
       node <T>* temp = first;
       
       while(temp!= NULL)
       {
           cout<<temp->data<<"\t";
           temp = temp->next;
       }
       cout<<"\n";
   }

  template <class T> 
   int SinglyLL<T>::Count()
   {
       return size;
   }
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////

 /*template <class T>
 struct node 
 {
     T data;
     struct node *next;
     struct node *prev;
 };*/
 //struct node NODE;
 //struct node *PNODE; //node *<T>
//////////////////////////////

template <class T>
 class DoublyLL
 {
 private:
   node <T>* first;
   int size;
   
 public:
   DoublyLL();
   void InsertFirst(T);
   void InsertLast(T);
   void InsertAtPos(T, int);
   void DeleteFirst();
   void DeleteLast();
   void DeleteAtPos(int);
   void Display();
   int count();


 };

template <class T>
 DoublyLL<T>::DoublyLL()  //constructor
 {
    first = NULL;
    size = 0;
 }
 
 template <class T>
 void DoublyLL<T>::InsertFirst(T no)
 {
     
    node <T>* newn = new node <T>; 
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    
   if(first == NULL)
   {
     first = newn;
   }
   else
   {
       newn->next = first;
       first->prev = newn;
       first = newn;
       
   }
   size++;
 }

 template <class T>
 void DoublyLL<T>::InsertLast(T no)
 {  
    node <T>* newn = new node <T>;
    
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;
    
    node <T>* temp = first;
    
    if(first == NULL)
    {
        first = newn;
    }
    else
    {
      while(temp->next != NULL)
      {
         temp = temp->next;
      }
      temp->next = newn;
      newn->prev = temp;
    }
    size++;
 }

 template <class T>
 void DoublyLL<T>::Display()
 {

    node <T>* temp = first;
    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    //cout<<"\n";
 }

 template <class T>
 int DoublyLL<T>::count()
 {
     return size;
 }

 template <class T>
 void DoublyLL<T>::DeleteFirst()
 {
    if(size == 1)
    {
      free(first);
      first = NULL;
      
    }
    else
    {
     node <T>* temp = first;
     first = first->next;
     free(temp);
     first->prev = NULL;
    }
    size--;
 }

 template <class T>
 void DoublyLL<T>::DeleteLast()
 {
    if(size == 0)
    {
        return;
    }
    else if(size == 1)
    {
      free(first);
      first = NULL;
    }
    else
    {
        node <T>* temp = first;
        
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
    size--;
    
 }
 

//////////////////////////////////////////////////////////////////
int main()
{
    SinglyLL <char>cobj; //obj int chyaLL la represent krtoy
    
    int iret = 0;
    
    cobj.InsertFirst('A');
    cobj.InsertFirst('B');
    cobj.InsertFirst('C');
    
    cobj.InsertLast('D');
    cobj.InsertLast('E');
    
    cout<<"singly linked list:\n";
    cobj.Display();
    
    iret = cobj.Count();
    cout<<"Number of char elemensts are : "<<iret<<"\n";
    ////////////////////////////

    SinglyLL <int>iobj; //obj int chyaLL la represent krtoy
    
    int Iret = 0;
    
    iobj.InsertFirst(11);
    iobj.InsertFirst(21);
    iobj.InsertFirst(51);
    
    iobj.InsertLast(101);
    iobj.InsertLast(111);
    
    iobj.Display();
    
    Iret = iobj.Count();
    cout<<"Number of integer elemensts are : "<<Iret<<"\n";
    ////////////////////////////////////////////////////


    SinglyLL <float>fobj; //obj int chyaLL la represent krtoy
    
    int Fret = 0;
    
    fobj.InsertFirst(1.1);
    fobj.InsertFirst(21.1);
    fobj.InsertFirst(0.51);
    
    fobj.InsertLast(1.01);
    fobj.InsertLast(1.11);
    
    fobj.Display();
    
    Fret = fobj.Count();
    cout<<"Number of float elemensts are : "<<Fret<<"\n";
    //////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////


    DoublyLL <int>idobj;
    int diret = 0;
    
    
    idobj.InsertFirst(21);
    idobj.InsertFirst(52);
    idobj.InsertFirst(111);
    
    idobj.InsertLast(222);
    
    idobj.DeleteFirst();
    idobj.DeleteLast();
    
    cout<<"doubly linear linked list is:\n";
    idobj.Display();
    diret = idobj.count();
    cout<<"\ncount integers is:\n"<<diret;
    
    ///////////////////////////////////////////
    DoublyLL <char>cdobj;
    int dcret = 0;
    
    
    cdobj.InsertFirst('A');
    cdobj.InsertFirst('B');
    cdobj.InsertFirst('C');
    
    cdobj.InsertLast('D');
    
    //cdobj.DeleteFirst();
    //cdobj.DeleteLast();
    
    
    cdobj.Display();
    dcret = cdobj.count();
    cout<<"\ncount of char is:\n"<<dcret;

    //////////////////////////////////////////

    DoublyLL <float>fdobj;
    int fdret = 0;
    
    
    fdobj.InsertFirst(2.1);
    fdobj.InsertFirst(5.2);
    fdobj.InsertFirst(11.1);
    
    fdobj.InsertLast(2.22);
    
    //fdobj.DeleteFirst();
    //fdobj.DeleteLast();
    
    //cout<<"doubly linear linked list is:\n";
    fdobj.Display();
    fdret = fdobj.count();
    cout<<"\ncount float is:\n"<<fdret;
    
    
    return 0;
}
















