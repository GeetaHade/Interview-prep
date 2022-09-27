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

class MarvellousNumbers
{
    public int Countvowels()
    {
        char Arr[] = str.toCharArray();
        int icnt =0, i =0;
       { while(i< Arr.length)
        {
            if (( Arr[i] == 'a') || ( Arr[i] == 'e') || ( Arr[i] == 'i') || ( Arr[i] == 'o')|| ( Arr[i] == 'u') )
            icnt++;
         }
        }
        return icnt;
    }
}
class Program151
{
    public static void main(String[] args) 
    {
        StringX sobj = new StringX();
        sobj.Accept();
        sobj.DDisplay();
    }
    
}
