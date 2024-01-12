import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int h = sc.nextInt(), m = sc.nextInt();
        if (m < 45)
            if(h == 0)
                System.out.printf("%s %s", h+23, m+15); //h-1+24
            else
                System.out.printf("%s %s", h-1, m+15); //m-45+60
        else
            System.out.printf("%s %s", h, m-45);
        sc.close();
    }
}