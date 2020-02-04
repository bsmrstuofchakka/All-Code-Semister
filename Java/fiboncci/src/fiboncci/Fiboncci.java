
package fiboncci;

import java.util.Scanner;

public class Fiboncci {

    static void recursive_fiboncci(int a, int b, int n, int i) {

        if (i == n ) {
            return;
        } 
        else {

            int sum = a + b;
            System.out.print(sum + " ");
            recursive_fiboncci(b,sum,n,++i);

        }

    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();

        int a = 0, b = 1;
        recursive_fiboncci(a, b, n,0);

    }

}
