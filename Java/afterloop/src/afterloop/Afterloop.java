package afterloop;

import java.util.Scanner;

public class Afterloop {

    public static Scanner hp = new Scanner(System.in);

    public static void main(String[] args) {

        System.out.print("Enter the Value: ");
        int a;
        a = hp.nextInt();

        System.out.println(a);

        for (int i = 1; i <= a; i++) {
            
            System.out.print(i+" ");
            continue;

        }

    }
}
