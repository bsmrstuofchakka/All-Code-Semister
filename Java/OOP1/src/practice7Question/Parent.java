
package practice7Question;


public class Parent {
    
    public static int parent=0;
     public static int i;
    Parent(){
        parent++;
    }
    void display(){
        System.out.println(parent-i);
    }
}
