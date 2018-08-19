import java.util.Scanner;

public class QuestionFive{

     public static void main(String []args)
	 {
		 Scanner scan = new Scanner(System.in);
		 char[] test = new char[20];
		 int questionNumber = 1;
		 String input;
		 while (test[19] == 0)
		 {
			 System.out.print("Enter answer to question " + questionNumber + ". ");
			 input = scan.next();
			 char answer = input.charAt(0);
			 while ((input.length() > 1) || ((answer != 'A') && (answer != 'B') && (answer != 'C') && (answer != 'D')))
			 {
				 System.out.print("Invalid input. Valid inputs are A, B, C, and D.");
				 System.out.print("Enter answer to question " + questionNumber + ". ");
				 input = scan.next();
			     answer = input.charAt(0);
			 }
			 test[questionNumber - 1] = answer;
			 questionNumber++;
			 
		 }
		 DriverExam thisTest = new DriverExam(test);
         if (thisTest.passed())
		 {
			 if (thisTest.totalCorrect() == 20)
			 {
				 System.out.println("You got every question correct. Congratulations!");
			 }
			 else
			 {
				 System.out.println("You passed with " + thisTest.totalCorrect() + " correct answers. You missed " + thisTest.totalIncorrect() + " answers. The questions you missed are:");
				 for (int i = 0; i < thisTest.totalIncorrect(); i++)
				 {
					 System.out.println(thisTest.questionsMissed()[i]);
				 }
			 }
		 }
		 else
		 {
			 System.out.println("You failed with " + thisTest.totalCorrect() + " correct answers. You missed " + thisTest.totalIncorrect() + " answers. The questions you missed are:");
			 for (int i = 0; i < thisTest.totalIncorrect(); i++)
			 {
				 System.out.println(thisTest.questionsMissed()[i]);
			 }
		 }
	 }
}