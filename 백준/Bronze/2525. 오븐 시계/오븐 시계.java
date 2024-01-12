import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt(), m = sc.nextInt(), t = sc.nextInt();

        int min = 60 * h + m; // ~시 ~분을 ~분으로 환산
        min += t; // 몇 분 걸렸는지 더한다.

        int hour = (min / 60) % 24;
        int minute = min % 60;

        System.out.printf("%s %s", hour, minute);
        sc.close();
    }
}
