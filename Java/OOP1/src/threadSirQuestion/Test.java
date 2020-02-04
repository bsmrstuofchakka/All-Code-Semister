
package threadSirQuestion;


public class Test {
    public static void main(String[] args) {
        threadSpecial t1=new threadSpecial ();    
        threadSpecial t2=new threadSpecial ();   
        threadSpecial t3=new threadSpecial ();   
        threadSpecial t4=new threadSpecial ();  
        threadSpecial t5=new threadSpecial ();  
         
        t1.start();  
        t2.start();  
        t3.start();  
        t4.start();  
        t5.start();  
        
    }
}
