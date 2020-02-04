
package overloading_constructor;


public class OverloadingConstructorTest {
    public static void main(String[] args){
        Teachar teachar1=new Teachar();
        
        Teachar teachar2=new Teachar("Murad","Male");
        teachar2.displayInformation();
        
        
        
        Teachar teachar3=new Teachar("Murad","Male",103883);
        teachar3.displayInformation();
        
    }
}
