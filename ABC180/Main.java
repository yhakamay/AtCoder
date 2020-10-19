import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		
		int n, a, b;
		n = scanner.nextInt();
		a = scanner.nextInt();
		b = scanner.nextInt();

		System.out.println(n - a + b);
	}
}
