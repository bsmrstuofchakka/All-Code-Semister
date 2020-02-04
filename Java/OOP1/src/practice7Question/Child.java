
package practice7Question;


public class Child extends Parent{
    
    public static int child =0;
   
    Child(){
        child++;
        i=child;
    }
    
   
    
      void display(){
        System.out.println(child);
    }
        
}
