package exception_handling;

import java.util.Scanner;

public class problemSolving {

    public static void main(String[] args) {
        
        int count=0;
        do {
            try {
                System.out.print("Enter the first input: ");
                Scanner input = new Scanner(System.in);

                int a = input.nextInt();
                System.out.print("Enter the second input: ");
                int b = input.nextInt();

                int result = a / b;
                System.out.println(result);
                count=1;
            } catch (Exception e) {
                System.out.println(e);
                System.out.println("You must enter the integer input and try again");
            }
        }while(count==0);

    }
}
