import java.util.Scanner;
import java.util.Random;

public class QuestionTen{

     public static void main(String []args)
	 {
		 //generates array of random integers up to length 10^6 for testing
		 Random ran = new Random();
		 int arraySize = ran.nextInt(1000000);
		 int[] testArray = new int[arraySize];
		 for (int i = 0; i < arraySize; i++)
		 {
			 testArray[i] = ran.nextInt(1000000);
		 }
		 //demonstrates methods defined outside of main
		 System.out.println("Array Total: " + getTotal(testArray));
		 System.out.println("Array Average: " + getAverage(testArray));
		 System.out.println("Highest Element: " + getHighest(testArray));
		 System.out.println("Lowest Element: " + getLowest(testArray));
	 }
	 private static long getTotal(int[] array)
	 {
		 long answer = 0;
		 for (int i = 0; i < array.length; i++)
		 {
			 answer += array[i];
		 }
		 return answer;
	 }
	 private static double getAverage(int[] array)
	 {
		 return (double)getTotal(array) / (double)array.length;
	 }
	 private static int getHighest(int[] array)
	 {
		 int answer = array[0];
		 for (int i = 0; i < array.length; i++)
		 {
			 if (array[i] > answer)
			 {
				 answer = array[i];
			 }
		 }
		 return answer;
	 }
	 private static int getLowest(int[] array)
	 {
		 int answer = array[0];
		 for (int i = 0; i < array.length; i++)
		 {
			 if (array[i] < answer)
			 {
				 answer = array[i];
			 }
		 }
		 return answer;
	 }
}