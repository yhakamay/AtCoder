import java.util.Scanner;

public class A_Not {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int	ans;

		ans = 0;
		if (sc.nextInt() == 0)
			ans = 1;
		System.out.print(ans);
	}
}
