
package inheritance2;


public class Test {
    public static void main(String[] args) {
        Teachar t1 = new Teachar();
        Person p1 = new Person();
        t1.name = "Murad";
        t1.age = 22;
        t1.qualification = "Degree in BSC";
                
        t1.displayInformation();
        p1.displayInformation();
    }
}
