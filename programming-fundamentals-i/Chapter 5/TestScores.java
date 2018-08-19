import java.util.Scanner;

public class TestScores{

     public static void main(String []args)
	 {
		 Scanner scan = new Scanner(System.in);
		 double score1, score2, score3, score4, score5;
         System.out.println("Input First Test Score");
		 score1 = scan.nextDouble();
		 System.out.println("Your first score is an " + determineGrade(score1));
		 System.out.println("Input Second Test Score");
		 score2 = scan.nextDouble();
		 System.out.println("Your second score is an " + determineGrade(score2));
		 System.out.println("Input Third Test Score");
		 score3 = scan.nextDouble();
		 System.out.println("Your third score is an " + determineGrade(score3));
		 System.out.println("Input Fourth Test Score");
		 score4 = scan.nextDouble();
		 System.out.println("Your fourth score is an " + determineGrade(score4));
		 System.out.println("Input Fifth Test Score");
		 score5 = scan.nextDouble();
		 System.out.println("Your fifth score is an " + determineGrade(score5));
		 System.out.println("Your test average is " + calcAverage(score1, score2, score3, score4, score5));
	 }
	 public static double calcAverage(double score1, double score2, double score3, double score4, double score5)
	 {
		 return (score1 + score2 + score3 + score4 + score5) / 5.;
	 }
	 public static char determineGrade(double testScore)
	 {
		 if (testScore >= 90)
		 {
			 return 'A';
		 }
		 else if (testScore >= 80)
		 {
			 return 'B';
		 }
		 else if (testScore >= 70)
		 {
			 return 'C';
		 }
		 else if (testScore >= 60)
		 {
			 return 'D';
		 }
		 else
		 {
			 return 'F';
		 }
	 }
}