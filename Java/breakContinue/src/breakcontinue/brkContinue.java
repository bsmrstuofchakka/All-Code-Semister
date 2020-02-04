package breakcontinue;

import java.util.Scanner;

public class Breakcontinue{
    
    static Scanner hp=new Scanner(System.in);
    
    public static void main(String args){
        
        int a;
        System.out.print("Enter the value: ");
        
        a=hp.nextInt();
        
        for(int i=0;i<=a;i++){
            System.out.print(i); 
            //break;
        }
        
    }
    
    
}