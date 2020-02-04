
package Abstraction2;


public class Triangle extends Shape{
    
    Triangle(double w,double h){
        width=w;
        height=h;
    }
    @Override
    void area(){
        double result=.5*width*height;
        System.out.println("Area of Triangle: "+result);
    }
}
