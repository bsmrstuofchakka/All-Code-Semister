
package abstraction1;


public class Rectangle extends Shape{
    
    
    Rectangle(double h,double w){
        super(h,w);
    }
    
    
    @Override
    void area(){
        double result=dim1*dim2;
        System.out.println("Area of Rectnagle:"+result);
    }
}
