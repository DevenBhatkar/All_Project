Package SHOPPNGBILL;
import java.util.*;
import java.text.SimpleDateFormat;
class Product
{
int quantity;
double rate,product_total;
String name,id;
Product()
{
this.id="000";
this.name="";
this.rate=0.0;
this.product_total=0.0;
this.quantity=0;
}
Product(String id2, String name2, double rate2,int quantity2,double product_total2)
{
id=id2;
name=name2;
rate=rate2;
product_total=product_total2;
quantity=quantity2;
}
void displayHeader()
{
System.out.println("\t\t\t\t\tOne Stop");
System.out.println("---------------------------------------------------------------------------------");
System.out.println("ID\t\tName\t\tRate\t\tQuantity\t\tTotal");
System.out.println("---------------------------------------------------------------------------------");
}
void displayProd()
{
System.out.println(id+"\t\t"+name+"\t\t"+rate+"\t\t"+quantity+"\t\t\t"+product_total);
}
}
public class ShoppingBill
{
public static void main(String args[])
{
Scanner sc = new Scanner(System.in);
Product p = new Product();
Date date=new Date();
ArrayList<Product>prod = new ArrayList<Product>();
SimpleDateFormat formatter = new
SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
System.out.println("Enter the products :");
char ch='Y';
int quantity;
double rate,product_total,total=0;
String name,id;
while(ch=='Y'||ch=='y')
{
System.out.println("Enter the ID of the product:");
id=sc.next();
System.out.println("Enter the Name of the product:");
name=sc.next();
System.out.println("Enter the Price of the product :");
rate=sc.nextDouble();
System.out.println("Enter the Quantity of the product :");
quantity=sc.nextInt();
product_total=rate*quantity;
prod.add(new Product(id,name,rate,quantity,product_total));
total+=product_total;
System.out.println("Do you want to continue?\nEnter Y for yes\n for no");
ch=sc.next().charAt(0);
}
System.out.println("\t\t\t\t\t\t\tDate:"+formatter.format(date));
System.out.println("---------------------------------------------------------------------------------");
double discount=0.1*total;
System.out.println("\t\t\t\t\tFinal Bill");
System.out.println("---------------------------------------------------------------------------------");
p.displayHeader();
for(Product pr:prod)
{
pr.displayProd();
}
System.out.println("\t\t\t\t\t\t\t\t----------------");
System.out.println("\t\t\t\t\t\t\t\tTotal:"+total+"\n\t\t\t\t\t\t\t\t--------------
"+"\n\t\t\t\t\t\t\t\tDiscount :"+discount);
System.out.println("\t\t\t\t\t\t\t\t----------------");
double gst=0.12*total;
total=(total+gst)-discount;
System.out.println("\t\t\t\t\t\t\t\tGST:"+gst+"\n\t\t\t\t\t\t\t\t------------------
"+"\n\t\t\t\t\t\t\t\tTotal:"+total);
}
}
