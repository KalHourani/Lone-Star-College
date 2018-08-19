import java.util.Scanner;

public class BMI{

     public static void main(String []args){
		 Scanner scan = new Scanner(System.in);
		 double weight, height;
         System.out.println("Input Weight (pounds)");
		 weight = scan.nextDouble();
		 System.out.println("Input Height (inches)");
		 height = scan.nextDouble();
		 double BMI = weight * 703 / (height * height);
		 if (BMI < 18.5)
		 {
			 System.out.println("You are underweight.");
		 }
		 else if ((18.5 < BMI) && (BMI < 25))
		 {
			 System.out.println("Your weight is optimal.");
		 }
		 else
		 {
			 System.out.println("You are overweight.");
		 }
}
}