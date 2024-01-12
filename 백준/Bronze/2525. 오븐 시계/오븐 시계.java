import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt(), m = sc.nextInt(), t = sc.nextInt();

        int min = 60 * h + m;
        min += t;

        int hour = (min / 60) % 24;
        int minute = min % 60;

        System.out.printf("%s %s", hour, minute);
        sc.close();
    }
}