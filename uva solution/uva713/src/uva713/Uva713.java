
package uva713;

import java.math.BigInteger;
import java.util.Scanner;

public class Uva713 {

    
    static BigInteger  reverse(BigInteger n){
        
        BigInteger temp=(BigInteger.ZERO);
        while(!n.equals(BigInteger.ZERO)){
            BigInteger a=n.mod(new BigInteger("10"));
            temp=temp.multiply(new BigInteger("10")).add(a);
            n=n.divide(new BigInteger("10"));
        }
        
        return temp;
    }
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        int t=input.nextInt();
        
        for(int k=0;k<t;k++){
            BigInteger n,m;
            n=input.nextBigInteger();
            m=input.nextBigInteger();
            
            
            BigInteger sum=reverse(n).add(reverse(m));
            System.out.println(reverse(sum));
            
            
            
            
            
        }
        
    }
    
}
