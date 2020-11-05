import java.util.Scanner;

public class A_Dont_be_late2 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int		d, t, s;

		d = sc.nextInt();
		t = sc.nextInt();
		s = sc.nextInt();
		sc.close();
		System.out.print(d > t * s ? "No" : "Yes");
	}
}
