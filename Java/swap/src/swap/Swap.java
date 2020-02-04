
package swap;
import java.util.Scanner;



public class Swap {
    
    
    static void swap(int a,int b){
  
           int temp; 
        temp=a.i;
        temp.i=b;
        b=a;
        a=temp;
        
        
    }

    
    public static void main(String[] args) {
       Scanner input=new Scanner(System.in);
       
       int a=input.nextInt();
       int b=input.nextInt();
       
       
       Integer x=new Integer(a);
       Integer y=new Integer(b);
       
       swap(a,b);
       
    }
    
}
