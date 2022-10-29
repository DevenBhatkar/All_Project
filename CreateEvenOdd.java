package p1;
public class First extends Thread
{
public void run()
{
int Arr[]={1,3,5,7,9};
try
{
for(int i=0;i<=4;i++)
{
System.out.println("The array is" +Arr [i]);
sleep(1500);
}
}
catch(Exception a)
{
System.out.println("error");
}
}
 
}
package p2;
public class Second extends Thread
{
public void run()
{
int Arr[]={2,4,6,8};
try
{
for(int i=0;i<=4;i++)
{
System.out.println("The array is" +Arr [i]);
sleep(1500);
}
}
catch(Exception a)
{
System.out.println("error");
}
}
}
package p3;
import p1.First;
import p2.Second;
public class Sau 
{
public static void main (String []args)
{
First obj1=new First();
Second obj=new Second();
obj1.start();
obj.start();
}
}
