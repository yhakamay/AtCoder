import java.util.Scanner;

public class A_Five_Variables {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[]	x = new int[7];
		int		i;
		int		ans = 0;

		i = 1;
		while (i <= 5) {
			x[i] = sc.nextInt();
			i++;
		}
		i = 1;
		while (i <= 5) {
			if (x[i] == 0)
				ans = i;
			i++;
		}
		System.out.print(ans);
	}
}
