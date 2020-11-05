import java.util.Scanner;

public class alphabet {

    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      char input = sc.next().charAt(0);
      char ans = 'a';

      if(Character.isUpperCase(input) == true){
        ans = 'A';
      }
	  System.out.print(ans);
    }
}
