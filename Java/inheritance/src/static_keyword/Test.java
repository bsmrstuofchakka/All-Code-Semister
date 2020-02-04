
package static_keyword;


public class Test {
    public static void main(String[] args){
        Student std1=new Student();
        
        std1.valueSet("Murad", 21);
        std1.display();
        
        Student std2=new Student();
        std2.valueSet("Urmi", 16);
        std2.display();
        
    }
}
