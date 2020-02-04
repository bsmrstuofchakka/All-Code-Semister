
package staticKeyword;


public class Test {
    public static void main(String[] args) {
        
        
       
        Student s2=new Student("Masum",12);
        Student s3= new Student("Syed Pallab",47);
        
        System.out.println("University name: "+Student.universityName);
        s2.displayInforamtion();
        s3.displayInforamtion();
    }
}
