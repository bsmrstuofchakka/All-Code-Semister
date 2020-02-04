
package oop;


public class teachar {
    String name,gender;
    int phone;
    
    
    teachar(String n,String g,int ph){
        name=n;
        gender=g;
        phone=ph;
    }
    
    
    
    void displayInformation(){
        System.out.println("Name :"+name);
       System.out.println("Gender :"+gender);
       System.out.println("phone :"+phone);
       System.out.println("\n");
    }
}
