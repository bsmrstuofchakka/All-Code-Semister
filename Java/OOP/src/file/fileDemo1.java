
package file;

import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import java.util.Formatter;
import java.util.Scanner;


public class fileDemo1 {
    public static void main(String[] args){
        
        
       
   
       String id, name;
       try{
           Formatter formatter = new Formatter("F://CODE//Java//OOP//Person//Student.txt");
           
           Scanner input = new Scanner(System.in);
           System.out.println("How many Students?");
           int num= input.nextInt();
           
           for(int i=1;i<=num;i++){
               System.out.println("Enter the id and name");
               id=input.next();
               name = input.next();
               formatter.format("%s, %s\r\n", id, name);
           
               
           }
           formatter.close();
           
           
       }catch(Exception ex){
           System.out.println(ex);
       }
       
       
       
       
    }
}
