
package inheritance2;

public class Teachar extends Person{
    String qualification;
    
    
    @Override
    void displayInformation(){
        System.out.println("Name2: "+name);
        System.out.println("Age2: "+age);
        System.out.println("Qualification: "+qualification);
    }
}
