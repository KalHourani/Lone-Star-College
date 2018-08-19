import java.util.Scanner;

public class Fat_Gram_Calculator{

     public static void main(String []args){
		 Scanner scan = new Scanner(System.in);
		 double calories, fat;
		 System.out.println("Input Calories.");
		 calories = scan.nextDouble();
		 System.out.println("Input Fat (g).");
		 fat = scan.nextDouble();
		 double fatCalories = fat * 9;
		 if (fatCalories > calories)
		 {
			 System.out.println("Error. The input is invalid. The number of fat calories is greater than the total calories.");
		 }
		 else
		 {
			 double fatPercentage = 100 * fatCalories / calories;
			 if (fatPercentage < 30)
			 {
				 System.out.println("The percentage of calories that comes from fat is " + fatPercentage + "%. This food is low fat!");
			 }
			 else
			 {
				 System.out.println("The percentage of calories that comes from fat is " + fatPercentage + "%.");
			 }
		 }
}
}