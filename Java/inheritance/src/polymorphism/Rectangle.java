package polymorphism;


public class Rectangle extends Shape{
    
    
    Rectangle(double height,double width){
        super(height,width);
    }
    
    @Override
    void area(){
        
        double result=height*width;
        System.out.println("Area of Rectangle ="+result);
    }

}
