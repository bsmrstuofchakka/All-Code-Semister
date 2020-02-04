
package lab1;

public class Sparrow extends Bird{
   
    String y;
    Sparrow(int n,String color,String s,String y){
        super(n,s,color);
        this.y=y;
        
    }
    public void Whetherr_sing(){
        
        System.out.println("whether:"+y);
    }
    
}
