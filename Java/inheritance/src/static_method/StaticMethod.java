
package static_method;


public class StaticMethod {
    
    static int x=10;
    static void display1(){
        display2();
        
        System.out.println("Non Static Method ");
    }
    
    static void display2(){
       
        System.out.println("X "+x);
        System.out.println("Static Method");
    }
}
