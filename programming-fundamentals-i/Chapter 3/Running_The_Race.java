import java.util.Scanner;

public class Running_The_Race{

     public static void main(String []args){
		 Scanner nameScan = new Scanner(System.in);
		 Scanner timeScan = new Scanner(System.in);
		 String name1, name2, name3;
		 double time1, time2, time3;
         System.out.println("Input Name of Runner 1");
		 name1 = nameScan.nextLine();
		 System.out.println("Input Time of Runner 1 (minutes)");
		 time1 = timeScan.nextDouble();
		 System.out.println("Input Name of Runner 2");
		 name2 = nameScan.nextLine();
		 System.out.println("Input Time of Runner 2 (minutes)");
		 time2 = timeScan.nextDouble();
		 System.out.println("Input Name of Runner 3");
		 name3 = nameScan.nextLine();
		 System.out.println("Input Time of Runner 3 (minutes)");
		 time3 = timeScan.nextDouble();
		 if (time1 > time2)
		 {
			 String tempName = name1;
			 name1 = name2;
			 name2 = tempName;
			 double tempTime = time1;
			 time1 = time2;
			 time2 = tempTime;
		 }
		 if (time1 > time3)
		 {
			 String tempName = name1;
			 name1 = name3;
			 name3 = tempName;
			 double tempTime = time1;
			 time1 = time3;
			 time3 = tempTime;
		 }
		 if (time2 > time3)
		 {
			 String tempName = name2;
			 name2 = name3;
			 name3 = tempName;
			 double tempTime = time2;
			 time2 = time3;
			 time3 = tempTime;
		 }
		 System.out.println("Gold: " + name1 + " (" + time1 + ")");
		 System.out.println("Silver: " + name2 + " (" + time2 + ")");
		 System.out.println("Bronze: " + name3 + " (" + time3 + ")");
}
}