
package intger;

import java.util.Scanner;

public class Intger {

    
    public static void main(String[] args) {
        Scanner pallab=new Scanner(System.in);
        int x=pallab.nextInt();
        int y=pallab.nextInt();
        System.out.println("the sum is:" +(x+y));
        int length;
        System.out.println("how much i input valu:  ");
         length =pallab.nextInt();
         for( int count=0;count<length;count++)
         {
           System.out.println(count);
          pallab. nextInt(count);
           
         }
        
        
        
    }
    
}
