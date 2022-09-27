import java.util.*;

class Program251
{
  public static void main(String arg [])
  {
      Scanner sobj = new Scanner(System.in);
      System.out.println("enter size of array");
      int size = sobj.nextInt();

      int Arr[] = new int[size];

      System.out.println("Enter elements");
      for(int i = 0; i<Arr.length; i++)
      {
          Arr[i] = sobj.nextInt();
      }

      System.out.println("enter data");
      for(int i = 0; i<Arr.length; i++)
      {
          System.out.println(Arr[i]);
      }

      
  }  
}
