package uva10494;

import java.math.BigInteger;
import java.util.Scanner;

public class Uva10494 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        while (true) {

            BigInteger n = input.nextBigInteger();
            char ch = input.next().charAt(0);
            BigInteger m = input.nextBigInteger();

            BigInteger result;
            if (ch == '%') {
                result = n.mod(m);
            } else {
                result = n.divide(m);
            }

            System.out.println(result);

        }

    }
}
