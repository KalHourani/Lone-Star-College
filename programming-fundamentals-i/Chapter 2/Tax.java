import java.util.Scanner;

public class Tax{

     public static void main(String []args){
        double price;
        Scanner keyboard = new Scanner(System.in);
        System.out.print("Enter Purchase Price: ");
        price = keyboard.nextDouble();
        double stateTax = 0.04 * price;
        double countyTax = 0.02 * price;
        System.out.println("Amount of Purchase: $" + price);
        System.out.println("State Sales Tax: $" + stateTax);
        System.out.println("County Sales Tax: $" + countyTax);
	double totalTax = stateTax + countyTax;
	System.out.println("Total Sales Tax: $" + totalTax);
        double totalPrice = price + totalTax;
        System.out.println("Total Sale Price: $" + totalPrice);
     }
}

