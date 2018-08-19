import java.util.Scanner;

public class test{

     public static void main(String []args){
	Scanner keyboard = new Scanner(System.in);
        int x;
	do 
	{
		System.out.print("Enter a number");
		x = keyboard.nextInt();
	}
	while (x > 0);
     }
}


