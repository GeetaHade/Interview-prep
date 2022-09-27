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
    public boolean Checkpallindrome()
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
        String newstr = new String(Arr);
        boolean bret = newstr.equals(str);
        return bret;
    }
}
class pboorogram156
{
    public static void main(String[] args) 
    {
        Marvellous mobj = new Marvellous();
        mobj.Accept();
        mobj.DDisplay();
        boolean bret;
        bret = mobj.Checkpallindrome();
        if(bret == true)
        {
            System.out.println("String is pallindrome");
        }
        else
        { 
            System.out.println("String is not pallindrome");
        }    
    }
    
}


