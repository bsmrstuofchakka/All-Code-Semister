
package lab1;
public class Bird extends Vertebrata {
    String color;

    public Bird(int n, String s,String color) {
        super(n,s);
        this.color=color;
    }
    public void color(){
        System.out.println("Color:"+color); 
    }
    
}
