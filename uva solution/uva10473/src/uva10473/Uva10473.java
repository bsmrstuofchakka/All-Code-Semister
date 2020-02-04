package uva10473;

import java.util.Scanner;

public class Uva10473 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        while (true) {
            String s = input.next();

            if (s.charAt(0) == '-') {
                break;
            }

            long temp = 0;
            int count = 0;
            for (int i = 0; i < s.length(); i++) {

                if (s.charAt(i) == 'x') {
                    count = 1;
                    break;
                } else {
                    int a = s.charAt(i) - '0';
                    temp = temp * 10 + a;
                }
            }
            
            
            

            int arr[] = new int[100];
            if (count == 0) {

                int j = 0;
                while (temp > 0) {
                    arr[++j] = (int) (temp % 16);
                    temp = temp / 16;

                }
                System.out.print("0x");

                for (int k = j; k > 0; k--) {
                    if (arr[k] == 10) {
                        System.out.print("A");
                    } else if (arr[k] == 11) {
                        System.out.print("B");
                    } else if (arr[k] == 12) {
                        System.out.print("C");
                    } else if (arr[k] == 13) {
                        System.out.print("D");
                    } else if (arr[k] == 14) {
                        System.out.print("E");
                    } else if (arr[k] == 15) {
                        System.out.print("F");
                    } else {
                        System.out.print(arr[k]);
                    }

                }
            } else {
                
                long m = 0;
                int j=0,a;
                for(int k=s.length()-1;k>=2;k--){
                    if(s.charAt(k)>='A'&&s.charAt(k)<='F')
                     a= s.charAt(k)-'0'-7;
                    else
                        a=s.charAt(k)-'0';
                    
                    m=(long) (m+a*Math.pow(16, j));
                    ++j;
                    
                    
                    
                   
                }
               
                System.out.print(m);

            }
            System.out.println();
        }

    }
}
