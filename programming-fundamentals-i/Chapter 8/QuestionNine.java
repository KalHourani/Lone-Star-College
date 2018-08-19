import java.util.Scanner;

public class QuestionNine{

     public static void main(String []args)
	 {
		 Scanner scan = new Scanner(System.in);
		 int[] personalPick = new int[5];
		 int choice;
		 String[] ordinal = {"first", "second", "third", "fourth", "fifth"};
		 for (int i = 0; i < 5; i++)
		 {
			 System.out.println("Choose your " + ordinal[i] + " number.");
			 choice = scan.nextInt();
			 while (choice < 0 || choice > 9)
			 {
				 System.out.println("Invalid choice. Number must be between 0 and 9 inclusive.");
				 System.out.println("Choose your " + ordinal[i] + " number.");
				 choice = scan.nextInt();
			 }
			 personalPick[i] = choice;
		 }
		 Lottery thisGame = new Lottery(personalPick);
			 int win = thisGame.numberThatMatch();
			 if (win == 5)
			 {
				 System.out.println("You got all 5 numbers! You are a grand prize winner!");
			 }
			 else
			 {
				 System.out.println("You got " + win + " numbers out of 5. Better luck next time.");
			 }
	 }
}