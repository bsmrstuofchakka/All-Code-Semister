
package staticKeyword;


public class Student {
    static String name;
    static int id;
    static String universityName="BSMRSTU";
    
    Student(String n,int i){
        name=n;
        id=i;
    }
    
    static void displayInforamtion(){
        System.out.println("Name: "+name);
        System.out.println("Id: "+id);
        System.out.println("University Name: "+universityName);
    }
}
