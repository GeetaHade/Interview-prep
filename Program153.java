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

class Marvellous extends StringX
{
    public String ReverseX()
    {
        char Arr[] = str.toCharArray();
        int istart=0 , iend = Arr.length-1;
        char temp;
        while( istart < iend)
        {
            temp = Arr[istart];
            Arr[istart]= Arr[iend];
            Arr[iend] = temp;
            istart++;
            iend--;
        }
        return String.copyValueOf(Arr);
    }
}
class Program153
{
    public static void main(String[] args) 
    {
        Marvellous mobj = new Marvellous();
        mobj.Accept();
        mobj.DDisplay();
        String s = mobj.ReverseX();
        System.out.println("Reverse string is:"+s);
    }
    
}

