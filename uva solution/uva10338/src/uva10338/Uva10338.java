package uva10338;

import java.math.BigInteger;
import java.util.Scanner;

public class Uva10338 {

    static BigInteger factorial(int n) {

        if (BigInteger.ONE.equals(BigInteger.valueOf(n))) {
            return BigInteger.ONE;
        } else {
            return BigInteger.valueOf(n).multiply(factorial(n - 1));
        }

    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int t = input.nextInt();
        for (int i = 1; i <= t; i++) {

            String s = input.next();

            int a = s.length();

            String count[] = new String[27];

            for (int j = 0; j < a; j++) {
                count[j] = count[j] + 1;
            }
            BigInteger two = new BigInteger("2");

            BigInteger result;
            result = factorial(a).divide(two);

            System.out.println("Data set " + i + ": " + result);

        }

    }

}
