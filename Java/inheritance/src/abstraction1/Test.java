
package abstraction1;


public class Test {
    public static void main(String[] args){
        Shape ob1;
        ob1 =new Rectangle(10,12);
        ob1.area();
        
        Shape ob2 =new Circle(10);
        ob2.area();
        
        Shape ob3 =new Triangle(10,20);
        ob3.area();
        
        
        
    }
}
