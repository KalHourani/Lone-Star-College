import java.util.Scanner;

public class PresentValue{

     public static void main(String []args)
	 {
		 double futureValue, annualInterestRate;
		 int numberOfYears;
		 Scanner scan = new Scanner(System.in);
         System.out.println("Input Future Value");
		 futureValue = scan.nextDouble();
		 System.out.println("Input Annual Interest Rate");
		 annualInterestRate = scan.nextDouble();
		 System.out.println("Input Number of Years");
		 numberOfYears = scan.nextInt();
		 System.out.println("Present Value is $" + presentValue(futureValue, annualInterestRate, numberOfYears));
	 }
	 public static double presentValue(double futureValue, double annualInterestRate, int numberOfYears)
	 {
		return futureValue / Math.pow(1 + annualInterestRate, numberOfYears); 
	 }
}