package practcal10;
import java.util.Scanner;
class InvalidAgeException extends Exception
{
	InvalidAgeException(String s)
	{
		super (s);
	}
}
class TestThrow
{
	static void validate (int age)throws InvalidAgeException 
	{
		if(age<18)
		{
			throw new InvalidAgeException ("not valid");
		}
		else
		{
			System.out.println("welcome to vote");
		}
	}
	static void degree(int age) throws InvalidAgeException 
	{
		if(age<17)
		{
			throw new InvalidAgeException ("not valid");
		}
		else
		{
			System.out.println("degree");
		}
	}
	static void Marriage (int age)throws InvalidAgeException 
	{
		System.out.println("\n 1 for male \n 2 for female");
		Scanner sc=new Scanner(System.in);
		int gender=sc.nextInt();
		if(age<21 && gender==1||age<18 && gender==2 )
		{
			throw new InvalidAgeException ("not valid");
		}
		else
		{
			System.out.println("congratulations");
		}
	}

	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("age");
	    int age=sc.nextInt();
		System.out.println("\n1.Age verification for voting");
		System.out.println("\n2.Age verification for degree");
		System.out.println("\n3.Age verification for marriage");
		
		int ch=sc.nextInt();
		switch(ch )
		{
		case 1: //voting
			
			try
			{
				validate(age);
						
			}
			catch(Exception m)
			{
				System.out.println("Exception occured:"+m);
			}
			
			break;
		case 2: //degree
			
			try
			{
				degree(age);
						
			}
			catch(Exception m)
			{
				System.out.println("Exception occured:"+m);
			}
		
			break;
		case 3: //marriage
			
			try
			{
				Marriage(age);
						
			}
			catch(Exception m)
			{
				System.out.println("Exception occured:"+m);
			}
			
			break;
		}
	}
}
