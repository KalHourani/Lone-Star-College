import java.util.Scanner;

public class TestScores{

     public static void main(String []args)
	 {
		 double x = 3.1415;
		 System.out.println(timesTen(x));
	 }
	 public static double calvAverage(double score1, double score2, double score3, double score4, double score5)
	 {
		 return (score1 + score2 + score3 + score4 + score5) / 5.;
	 }
	 public static double determineGrade(double testScore)
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
			 return 'D'
		 }
		 else
		 {
			 return 'F';
		 }
	 }
}