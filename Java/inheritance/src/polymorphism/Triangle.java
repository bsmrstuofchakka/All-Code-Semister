
package polymorphism;


public class Triangle extends Shape{
    
    Triangle(double height,double width){
        super(height,width);
    }
    
    @Override
    public void area(){
        
         double result=.5*height*width;
        System.out.println("Area of Trangle= "+result);
    }
}
