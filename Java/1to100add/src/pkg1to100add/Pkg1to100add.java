package pkg1to100add;

import java.util.Scanner;

public class Main{
    
    public static Scanner hp=new Scanner(System.in);
    
    public static void main(String[] agrs){
        
        int a;
        System.out.print("Enter the Value: ");
        a=hp.nextInt();
        int sum=0;
        for(int i=1;i<=a;i++){
            sum=sum+i;
        }
        System.out.print(sum+"\n");
        
        
    }
}