//import java.lang.reflect.Array;
import java.util.*;

abstract class ArrayX
{
    public int Arr[];
    public ArrayX(int size)
    {
        Arr = new int[size];
    }

    public void Accept()
    {
       Scanner sobj = new Scanner(System.in);
       System.out.println("Enter elements");
       for(int i = 0; i<Arr.length; i++)
       {
          Arr[i] = sobj.nextInt();
       }
    }

    public void Display()
    {
      System.out.println("enter data");
      for(int i = 0; i<Arr.length; i++)
      {
          System.out.println(Arr[i]);
      }
    }

    public abstract boolean search(int no);

}

class Searching extends ArrayX
{
    public Searching(int size)
    {
        super(size);
    }
    public boolean search(int no)
    {
        int i = 0;
        for(i = 0; i<Arr.length; i++)
        {
            if(Arr[i] == no)
            {break;}
        }

        if(i == Arr.length)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
class Program252
{
  public static void main(String args [])
  {
      Scanner sobj = new Scanner(System.in);
      System.out.println("enter size of array");
      int size = sobj.nextInt();

     // int Arr[] = new int[size];

     // ArrayX obj = new ArrayX(size)
     Searching obj = new Searching(size);

     obj.Accept();
     obj.Display();

     System.out.println("enter element to search");
     int no = sobj.nextInt();

     boolean bret = obj.search(no);
     if(bret == true)
     {
        System.out.println(" element found");
     }
     else
     {
        System.out.println(" element not found");
     }

      
      
  }  
}
