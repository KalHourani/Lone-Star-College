import java.util.Scanner;

public class QuestionSeven{

     public static void main(String []args)
	 {
		 Scanner scan = new Scanner(System.in);
		 double radius;
         System.out.print("Enter a radius: ");
		 radius= scan.nextDouble();
		 Circle circle = new Circle(radius);
		 System.out.println("This circle, with a radius of " + circle.getRadius() + " has an Area of " + circle.getArea() + ", a diameter of " + circle.getDiameter() + ", and a circumference of " + circle.getCircumference() + ".");
	 }
}