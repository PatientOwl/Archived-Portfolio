import java.util.Scanner;
/**
 * Basic exercises from this website:
 * https://www.w3resource.com/java-exercises/basic/index.php#h_one
 * @author cvhs3
 *
 */
public class w3r_BasicExercises_1to10 {
	
	static Scanner scan = new Scanner(System.in);
	
	public static void main(String[] args) {
		System.out.println("urmom");
		
		System.out.println(74 + 36);
		
		System.out.println(50 % 3);
		
		/***************************************************/
		int x, y;
		
		System.out.print("\nInput first number: ");
		x = scan.nextInt();
		
		System.out.print("Input second number: ");
		y = scan.nextInt();
		
		System.out.println(x + " + " + y + " = " + (x + y));
		System.out.println(x + " - " + y + " = " + (x - y));
		System.out.println(x + " * " + y + " = " + (x * y));
		System.out.println(x + " / " + y + " = " + (x / y));
		System.out.println(x + " % " + y + " = " + (x % y));
		
		/***************************************************/
		System.out.print("\nInput a number: ");
		int num1 = scan.nextInt();
		
		for (int i = 0; i < 10; i++) {
			System.out.println(num1 + " * " + (i+1) + " = "
					+ (num1 * (i+1)));
		}
		
		System.out.println("   J    a   v     v   a");
		System.out.println("   J   a a   v   v   a a");
		System.out.println("J  J  aaaaa   v v   aaaaa");
		System.out.println(" JJ  a     a   v   a     a");
		
		/**************************************************/
		
		
	}

}
