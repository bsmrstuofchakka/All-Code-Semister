
package abstraction1;


public  class Triangle extends Shape{
    
    Triangle(double h,double w){
        super(h,w);
    }
    
    
    @Override
    void area(){
        double result=.5*dim1*dim2;
        System.out.println("Area of Triangle:"+result);
    }
}
