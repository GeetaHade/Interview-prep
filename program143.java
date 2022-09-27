import java.util.*;

class program143
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0, icnt=0;

        System.out.println("enter number of elements");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];
//new is like malloc allocates memory during run time.
        System.out.println("enter numbers");
        for(icnt = 0; icnt< Arr.length; icnt++)
        {
            Arr[icnt] = sobj.nextInt();
        }

        System.out.println("entered elements are");
        for(icnt = 0; icnt < Arr.length; icnt++)
        {
            System.out.println(Arr[icnt]);
        }

    }
}