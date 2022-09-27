import java.util.*;
//no constructor cuz no need to allocate memory
class StringX
{
    public String str;
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("enter string");
        str = sobj.nextLine();
    }

    public void DDisplay()
    {
        System.out.println("String is:"+str);
    }
}
class program150
{
    public static void main(String[] args) 
    {
        StringX sobj = new StringX();
        sobj.Accept();
        sobj.DDisplay();
    }
    
}
