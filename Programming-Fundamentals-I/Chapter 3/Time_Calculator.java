import java.util.Scanner;

public class Time_Calculator{

     public static void main(String []args){
		 Scanner scan = new Scanner(System.in);
		 int numberOfSeconds;
         System.out.println("Input Number of Seconds");
		 numberOfSeconds = scan.nextInt();
		 if (numberOfSeconds >= 60)
		 {
			 int numberOfMinutes = numberOfSeconds / 60;
			 System.out.println("There are " + numberOfMinutes + " minutes in " + numberOfSeconds + " seconds.");
		 }
		 if (numberOfSeconds >= 3600)
		 {
			 int numberOfHours = numberOfSeconds / 3600;
			 System.out.println("There are " + numberOfHours + " hours in " + numberOfSeconds + " seconds.");
		 }
		 if (numberOfSeconds >= 86400)
		 {
			 int numberOfDays = numberOfSeconds / 86400;
			 System.out.println("There are " + numberOfDays + " days in " + numberOfSeconds + " seconds.");
		 }
}
}