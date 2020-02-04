
package polymorphism2;


public class Triangle extends Shape{
    Triangle(double w,double h){
        width=w;
        height=h;
    }
    @Override
    void area(){
        double result = (height*width)/2;
        System.out.println("Area of Triangle: "+result);
    }
}
