import java.util.Scanner;

public class A_Plural_Form {
	public static void main(String [] args) {
		String	s;
		Scanner scan = new Scanner(System.in);

		s = scan.next();
		if (s.endsWith("s")) {
			s += "es";
		} else {
			s += "s";
		}
		System.out.println(s);
	}
}
