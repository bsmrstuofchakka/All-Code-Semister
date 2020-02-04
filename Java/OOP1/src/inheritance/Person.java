
package inheritance;


public class Person{
    private String name;
    int age;
    
    public String getName(){
        return name;
    }
    public void setName(String name){
        this.name = name;
    }
    
    
    
    void displayInformation(){
        System.out.println("Name: "+ name);
        System.out.println("Age: "+ age);
    }
}