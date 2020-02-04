
package polymorphism2;


public class Rectangle extends Shape{
    
    
    Rectangle(double w,double h){
        width=w;
        height=h;
    }
    @Override
    void area(){
        double result= width*height;
        System.out.println("Area of Rectangle: "+result);
    }
}
