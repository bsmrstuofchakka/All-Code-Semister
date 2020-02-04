package polymorphism2;

public class Test {

    public static void main(String[] args) {
        Shape obj = new Shape();
        obj = new Rectangle(10, 20);
        obj.area();
        obj = new Triangle(10,20);
        obj.area();
        
    }

}
