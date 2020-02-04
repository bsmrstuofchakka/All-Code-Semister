package loop;

import java.util.Scanner;

public class Loop{
    
    static Scanner hp=new Scanner(System.in);
    
    public static void main(String[] args){
        
        int a;
        System.out.print("Enter the value: ");
        
       a=hp.nextInt();
      
       System.out.println(a);
       
       
       for(int i=0;i<a;i++){
           System.out.print(i);
           System.out.print(" ");
           
       }
       System.out.println();
       
        int i=0;
       do{
           
           System.out.print(i);
           System.out.print(" ");
           i++;
       }
       while(i!=a);
       
       
    }
    
    
    
}