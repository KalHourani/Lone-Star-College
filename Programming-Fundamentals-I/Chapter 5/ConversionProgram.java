import java.util.Scanner;

public class ConversionProgram{

     public static void main(String []args)
	 {
		 Scanner scan = new Scanner(System.in);
		 double distance;
         System.out.print("Enter a distance in meters: ");
		 distance = scan.nextDouble();
		 while (true)
		 {
			 int choice = 0;
			 System.out.println("1. Convert to kilometers");
			 System.out.println("2. Convert to inches");
			 System.out.println("3. Convert to feet");
			 System.out.println("4. Quit the program");
			 System.out.print("\nEnter your choice: ");
			 choice = scan.nextInt();
			 if (choice == 1)
			 {
				 showKilometers(distance);
			 }
			 else if (choice == 2)
			 {
				 showInches(distance);
			 }
			 else if (choice == 3)
			 {
				 showFeet(distance);
			 }
			 else
			 {
				 System.out.println("Bye!");
				 break;
			 }
		 }
	 }
	 public static void showKilometers(double meters)
	 {
		 System.out.println(meters + " meters is " + meters * 0.001 + " kilometers.\n");
	 }
	 public static void showInches(double meters)
	 {
		 System.out.println(meters + " meters is " + meters * 39.37 + " inches.\n");
	 }
	 public static void showFeet(double meters)
	 {
		 System.out.println(meters + " meters is " + meters * 3.281 + " feet.\n");
	 }
	 
}