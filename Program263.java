import javax.lang.model.util.ElementScanner14;
import javax.lang.model.util.ElementScanner6;

//import java.util.*;

class Node
{
    public int data;
    public Node next;
}
class SinglyLL
{
    private Node first;
    private int size;

    public SinglyLL()
    {
        this.first = null;
        this.size = 0;
    }

    public void InsertFirst(int no)
    {
        Node newn = null;
        newn = new Node();

        newn.data = no;
        newn.next = null;

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }
        this.size++;
    }
    public void Display()
    {
        Node temp = first;
        System.out.println("Elements from linked list are");

        while(temp!=null)
        {
            System.out.print("|"+temp.data+"|->");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
      return this.size;
    }

    public void InsertLast(int no)
    {
        Node newn = null;
        newn = new Node();

        newn.data = no;
        newn.next = null;

        if(first == null)
        {
            first = newn;
        }
        else
        {
           Node temp = first;

           while(temp.next != null)
           {
               temp = temp.next;
           }
           temp.next = newn;
        }
        this.size++;
    }

    public void DeleteFirst()
    {
        if(size == 0)
        {return;}

        if(size == 1)
        {
            first = null;
            this.size--;
        }
        else
        {
            first = first.next;
        }
        this.size--;
    }

    public void DeleteLast()
    {
        if(size == 0)
        {return;}

        if(size == 1)
        {
            first = null;
            this.size--;
        }
        else
        {
            Node temp = first;

            while(temp.next.next != null)
            {
                temp = temp.next;
            }
            temp.next = null;   //system.gc=calls garbage collecter in java
        }
        this.size--;
    }

    public void InsertAtPos(int no, int ipos)
    {
        if((ipos<0) || (ipos > size+1))
        {
            return;
        }
        if(ipos == 1)
        {
            InsertFirst(no);
        }
        else if(ipos == size +1)
        {
            InsertLast(no);
        }
       else      
       {
           Node newn = new Node;
           newn.data = no;
           newn.next = null;

           Node temp = first;

           for(int i=1; i<ipos-1; i++)
           {
             temp = temp.next; 
           }
           newn.next = temp.next;
           temp.next = newn;
           this.size++;
       }
    }

    public void DeleteAtPos( int ipos)
    {
        if((ipos<0) || (ipos > size+1))
        {
            return;
        }
        if(ipos == 1)
        {
            DeleteFirst();
        }
        else if(ipos == size +1)
        {
            DeleteLast();
        }
       else      
       {
        

           Node temp = first;

           for(int i=1; i<ipos-1; i++)
           {
             temp = temp.next; 
           }
           newn.next = temp.next.next;
           
           this.size--;
       }
    }
}



class Program263
{
    public static void main (String str[]) 
    {
        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        obj.InsertLast(101);
        obj.InsertLast(111);

        obj.InsertAtPos(74,4);

        obj.Display();

        System.out.println("number of element are: "+obj.Count());

       // obj.DeleteFirst();
        //obj.DeleteLast();
         obj.DeleteAtPos(4);
         obj.Display();

        System.out.println("number of element are: "+obj.Count());

    }
}