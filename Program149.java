import java.util.*;


class Marvellous
{
    public void Display(String Data) //datatype
    {
        System.out.println("welcome: "+Data);
    }
}
class Program149
{
    public static void main(String arg[])
    {
      Scanner sobj = new Scanner(System.in);
      String str; //reference str
      System.out.println("enter your name");
      str = sobj.nextLine(); //input stng
      Marvellous mobj = new Marvellous();
      mobj.Display(str);

      

    }
}
