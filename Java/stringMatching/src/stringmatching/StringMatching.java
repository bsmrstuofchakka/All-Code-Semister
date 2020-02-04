
package stringmatching;
import java.util.Scanner;

public class StringMatching {

   
    public static void main(String[] args) {
        
        Scanner input=new Scanner(System.in);
        String s1=input.nextLine();
        
        String s2=input.nextLine();
        
       s1.toUpperCase();
       s2.toUpperCase();
       
        boolean count=false;
        if(s1.length()!=s2.length())
            count=true;
        
        for(int i=0;i<s1.length();i++){
            if(s1.charAt(i)!=s2.charAt(i)){
                count= true;
            }
        }
        
        if(count==false)
            System.out.println("Case Sensitive");
        else
            System.out.println("Case Not  Sensitive");
        
        
    }
    
}
