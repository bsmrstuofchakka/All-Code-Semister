
package interface2;


public class Animal implements Chailden1,Children2{
    @Override
    public void eat(){
        System.out.println("Children1 communicate with parent");
    }
    
    
    public void eat1(){
        System.out.println("Children2 communicate with parent");
    }
    
    
}
