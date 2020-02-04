
package Abstraction2;


public class Circle extends Shape{
    
    Circle(double r){
        radius=r;
    }
    @Override
    void area(){
        double result=Math.PI*radius*radius;
        System.out.println("Area of Circle: "+result);
    }
}
