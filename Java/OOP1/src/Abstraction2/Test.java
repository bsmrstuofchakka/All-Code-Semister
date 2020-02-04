
package Abstraction2;


public class Test {
    public static void main(String[] args){
        Shape obj;
        obj = new Rectangle(10,10);
        obj.area();
        
        obj = new Triangle(10,10);
        obj.area();
        
        obj= new Circle(10);
        obj.area();
        
    }
}
