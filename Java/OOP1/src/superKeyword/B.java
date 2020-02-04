
package superKeyword;


public class B extends A{
    int x=5;
    
   
    @Override
    void display(){
        
        super.display();
        System.out.println(super.x);
        System.out.println("Inside B class");
    }
}
