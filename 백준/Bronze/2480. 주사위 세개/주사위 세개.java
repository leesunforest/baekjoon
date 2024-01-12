import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt(), y = sc.nextInt(), z = sc.nextInt();

        if (x == y && y == z)
            System.out.println(10000 + x * 1000);
        else if (x == y)
            System.out.println(1000 + x * 100);
        else if (y == z)
            System.out.println(1000 + y * 100);
        else if (x == z)
            System.out.println(1000 + x * 100);
        else {
            int max = x;
            if (y > max)
                max = y;
            if (z > max)
                max = z;
            System.out.println(max * 100);
        }
        sc.close();
    }
}