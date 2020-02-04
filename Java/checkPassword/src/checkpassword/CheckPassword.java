package checkpassword;

import java.util.Scanner;

public class CheckPassword {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String s = input.next();
        boolean count = false;

        if (s.length() <= 8) {
            count=true;
        }
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i)>='a'&&s.charAt(i)<='z') {
                    
                    count=true;
                }
            }

        
        
        if(count==true){
            throw new ArithmeticException("Thrown the own Exception");
        }
        else{
            System.out.println("PASSWORD CHECKED");
        }
        
    }
}
