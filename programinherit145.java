import java.util.*;

class ArrayX
{
    public int Arr[];  //ref to array there is no memory alloctn
    public ArrayX(int iSize) //4 (constructor)//parameterised constructor cuz input ghetoy
    {
      Arr = new int[iSize];

    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int icnt=0;
        System.out.println("enter elements");
        for(icnt=0; icnt< arr.length; icnt++)
        {
            Arr[icnt] = sobj.nextInt();
        }

    }
    public void Display()
    {
       int icnt = 0;
       System.out.println("elements are :");
       for(icnt = 0; icnt < Arr.length; icnt++)
       {
           System.out.println(Arr[icnt]);
       }
    }
}

class Marvellous extends ArrayX //inherits all abv

{ public Marvellous(int ivalue)
    {
       super(ivalue); //parent class
    }

    public int Add()
    {
        int isum =0, icnt = 0;
        for(icnt = 0; icnt < Arr.length; icnt++)
        {
            isum = isum + Arr[icnt]; //here arr comes from parent class

        }
        return isum;
    }
}
class programinherit145
 { public static void main(String arg[])
    {
        Scanner sob = new Scanner(System.in);
        int ilength = 0, iret = 0;

        System.out.println("enter number of elements");
        ilength = sobj.nextInt();

        Marvellous mobj = new Marvellous(ilength); //call constructor
        mobj.Accept(); //geter
        mobj.Display();//setter method
        iret = mobj.Add();
        System.out.println("Addition is: "+iret);
    }

    
}
