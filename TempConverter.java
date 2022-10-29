package com.introduction.java;
import java.util.Scanner;
public class exp_7_8 {
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		double c,f,k,ans;
		int choice;
		char cam='y';
		System.out.println("Enter Celcius, Farenheit & Kelvin");
		c=sc.nextFloat();
		f=sc.nextFloat();
		k=sc.nextFloat();
		
		while(cam=='y')
		{
			System.out.println("Enter your choice:\n1.Celcius-->Farenheit\n2.Celcius-->Kelvin\n3.Farenheit-->Celcius\n4.Farenheit-->Kelvin\n5.Kelvin-->Celcius\n6.Kelvin-->Farenheit");
			choice=sc.nextInt();
			switch(choice)
			{
			case 1:
				ans=(c*9/5)+32;
				System.out.println("\nAnswer="+ans);
				break;
			case 2:
				ans=c+273.15;
				System.out.println("\nAnswer="+ans);
				break;
			case 3:
				ans=(f-32)*5/9;
				System.out.println("\nAnswer="+ans);
				break;
			case 4:
				ans=(f-32)*5/9+273.15;
				System.out.println("\nAnswer="+ans);
				break;
			case 5:
				ans=k-273.15;
				System.out.println("\nAnswer="+ans);
				break;
			case 6:
				ans=(k-273.15)*9/5+32;
				System.out.println("\nAnswer="+ans);
				break;
				default:
					System.out.println("\nWrong Choice");
					break;
			}
			System.out.println("Do you wish to proceed? y or n");
			cam=sc.next().charAt(0);	
		}
	}
}
