import java.util.Scanner;

public class Sorted_Names{

     public static void main(String []args){
		 Scanner scan = new Scanner(System.in);
		 String name1, name2, name3;
         System.out.println("Input Name of Person 1");
		 name1 = scan.nextLine();
		 System.out.println("Input Name of Person 2");
		 name2 = scan.nextLine();
		 System.out.println("Input Name of Person 3");
		 name3 = scan.nextLine();
		 if (name1.compareToIgnoreCase(name2) > 0)
		 {
			 String tmp = name1;
			 name1 = name2;
			 name2 = tmp;
		 }
		 if (name1.compareToIgnoreCase(name3) > 0)
		 {
			 String tmp = name1;
			 name1 = name3;
			 name3 = tmp;
		 }
		 if (name2.compareToIgnoreCase(name3) > 0)
		 {
			 String tmp = name2;
			 name2 = name3;
			 name3 = tmp;
		 }
		 System.out.println(name1);
		 System.out.println(name2);
		 System.out.println(name3);
}
}