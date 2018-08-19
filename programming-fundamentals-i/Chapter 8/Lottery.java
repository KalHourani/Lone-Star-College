import java.util.Random;

public class Lottery
	 {
		 private int[] lotteryNumbers = new int[5];
		 public int[] personPick = new int[5];
		 public Lottery(int[] array)
		 {
			 Random ran = new Random();
			 int choice;
			 for (int i = 0; i < 5; i++)
			 {
				 lotteryNumbers[i] = ran.nextInt(10);
				 personPick[i] = array[i];
			 }
		 }
		 public int numberThatMatch()
		 {
			 int answer = 0;
			 for (int i = 0; i < 5; i++)
			 {
				 if (lotteryNumbers[i] == personPick[i])
				 {
					 answer++;
				 }
			 }
			 return answer;
		 }
		 public int[] WinningTicket()
		 {
			 return lotteryNumbers;
		 }
	 }