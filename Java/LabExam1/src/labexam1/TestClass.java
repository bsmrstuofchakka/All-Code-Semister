
package labexam1;


public class TestClass {
    public static void main(String[] args) {
         Vertebrata v = new Vertebrata();
        v.display();
        
        v = new Sparrow(20,"Red","lunch","yes");
        v.display();
        
        v=new Whale(20,12,"lunch","yes");
        v.display();
        
        v= new Human(206,"warm","lunch","yes");
        v.display();
    }
    
}
