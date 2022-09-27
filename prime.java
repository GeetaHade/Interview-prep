//program141
import java.util.*; //(pakage input)
class Marvellous
{
    boolean checkprime(int ino)
    {
     int icnt = 0;
     boolean bflag=true;
     
     for(icnt = 2; icnt <=ino/2; icnt++)
     {
         if(ino%icnt == 0)
         {
             bflag =false;
             break;
         }
     }
     return bflag;
    }
}
class prime
{
    public static void main (String arg[]) 
{
    Scanner sobj = new Scanner(System.in); //(obj create)
    int ivalue = 0;
    boolean bret=false;
    
    System.out.println("enter number");
    ivalue = sobj.nextInt();
    
    Marvellous mobj = new Marvellous(); //(object create)
    bret = mobj.checkprime(ivalue);
    
    if(bret == true)
    {System.out.println("it is prime");}
    else
    {System.out.println("it is not prime");}
}
}