import java.util.Scanner;

public class A_Rainy_Season {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String	s;
		int		ans;

		s = in.next();
		in.close();
		if (s.equals("RRR"))
			ans = 3;
		else if (s.equals("SSS"))
			ans = 0;
		else if (s.equals("RRS") || s.equals("SRR"))
			ans = 2;
		else
			ans = 1;
		System.out.print(ans);
	}
}
