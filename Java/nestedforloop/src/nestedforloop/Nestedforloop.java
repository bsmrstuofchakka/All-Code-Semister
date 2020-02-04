package nestedforloop;

import java.util.Scanner;

public class Nestedforloop{
    
    public static Scanner hp=new Scanner(System.in);
    
    public static void main(String[] args){
        
        int a;
        System.out.print("Enter the Value: ");
        
        a=hp.nextInt();
        
        for(int i=1;i<=a;i++){
            for(int j=1;j<=a;j++){
                System.out.print(i+" "+j+"\n");
                
            }
        }
    }
}