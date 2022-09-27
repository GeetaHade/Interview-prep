import java.util.*;
class Marvellous{
    public int Add(int brr[])
    { int isum=0, icnt=0;
        for(icnt=0; icnt< brr.length; icnt++)
        {
            isum = isum + brr[icnt];
        }
        return isum;

    }
}

class programadd144
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0, icnt=0, iret = 0;

        System.out.println("enter number of elements");
        iSize = sobj.nextInt();
//Arr = (int*)malloc(sizeof(int)*iSize)
        int Arr[] = new int[iSize];

        System.out.println("enter numbers");
        for(icnt = 0; icnt< Arr.length; icnt++)
        {
            Arr[icnt] = sobj.nextInt();
            //scanf("%d",&Arr[icnt])
        }

        Marvellous mobj = new Marvellous();  //object of cls marvel created
        iret = mobj.Add(Arr);//(here arr doesn't pass base add)
//there is no pointer in java so only call by value.
        System.out.println("addition is: "+iret);
//iret = add(arr,isize)in c!!
       

    }
}
    

