
package static_keyword;


public class Student {
    String name;
    int age;
    static String versity_name="BSMRSTU";
    
   void valueSet(String n,int a){
        name=n;
        age=a;
        
    }
    
    void display(){
        System.out.println("Name :"+name);
        System.out.println("Age :"+age);
        System.out.println("Versity_name :"+versity_name);
    }
}
