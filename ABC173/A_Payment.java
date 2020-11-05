import java.util.Scanner;

public class A_Payment {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int	count = 0;
		int	n;
		int	change;

		n = in.nextInt();
		while (count * 1000 < n)
			count++;
		change = count * 1000 - n;
		System.out.print(change);
	}
}
