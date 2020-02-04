

package ifelse1;

import java.util.Scanner;

public class IfElse1{
    static Scanner murad=new Scanner(System.in);
    
    public static void main(String[] args){
        
        int a;
        System.out.print("Enter the value: ");
        a=murad.nextInt();
        
        if(a==1)
            System.out.println("1 has been found");
        if(a==1)
            System.out.println("Both statements are true");
        else
            System.out.println("1 has not been found");
        
    }
    
}