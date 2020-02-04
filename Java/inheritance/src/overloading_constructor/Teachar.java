
package overloading_constructor;


public class Teachar {
    
    String name,gender;
    int phone;
    
    Teachar(){
        System.out.println("No Value");
    }
    
    Teachar(String n,String g){
        name=n;
        gender=g;
    }
    Teachar(String n,String g,int ph){
        name=n;
        gender=g;
        phone=ph;
    }
    
    void displayInformation(){
        System.out.println("Name :"+name);
        System.out.println("Gender :"+gender);
        System.out.println("Phone :"+phone);
        System.out.println("\n");
    }
    
}
