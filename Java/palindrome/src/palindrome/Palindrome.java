package palindrome;

import java.util.Scanner;

public class Palindrome {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.next();
        
        
       
        int j = 0,count=0;
        for (int i = s.length()-1; i >= 0; i--) {
           
            if(s.charAt(i)!=s.charAt(j))
                count=1;
            
            ++j;
        }
        if(count==0)
            System.out.println("Palindrome");
        else
            System.out.println("Not Palindrome");
        

    }

}
