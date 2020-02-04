package polymorphism;

public class Test {

    public static void main(String[] args) {
        Shape ob = new Shape(10, 23);
        ob.area();

        Shape ob1 = new Rectangle(10, 20);
        ob1.area();

        Shape ob2 = new Triangle(13, 10);
        ob2.area();

    }
}
