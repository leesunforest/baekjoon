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

/*
변수 h : 시 / 변수 m : 분
중첩 if 문 : if문(m <45) -> if문(h가 0일 때)
1.m이 45보다 작고, h가 0일 때 : h + 23, m + 15 (h - 1 + 24, m - 45 + 60) /  45분 일찍 설정하면 h, m이 음수가 되므로
2.m이 45보다 작고, h가 0이 아닐 때 : h - 1, m + 15
3.m이 45보다 클 때 : h, m -45
*/
