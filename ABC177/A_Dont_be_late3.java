import java.util.Scanner;

public class A_Dont_be_late3 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print(sc.nextInt() > sc.nextInt() * sc.nextInt() ? "No" : "Yes");
		sc.close();
	}
}
