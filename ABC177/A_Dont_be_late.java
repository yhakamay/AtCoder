import java.util.Scanner;

public class A_Dont_be_late {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int		d, t, s;
		String	ans;

		d = sc.nextInt();
		t = sc.nextInt();
		s = sc.nextInt();
		sc.close();
		ans = "Yes";
		if (t * s < d)
			ans = "No";
		System.out.print(ans);
	}
}
