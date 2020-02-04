
package lab1;

public class Human extends Mammal{
    int n;
    String b;
    String s;
    String y;
    public Human(int n,String b,String s,String y){
        this.n=n;
        this.b=b;
        this.s=s;
        this.y=y;    
    }
  
    public void numbr_of_bones(){
        System.out.println("Number of bones:"+n); 
        
    }

    public void whether_blooded(){
        System.out.println("Blood:"+b);
    }
 
    public void respiratory_system(){
        
        System.out.println("Reporatory:"+s);
    }
    public void Whetherr_brain(){
        
        System.out.println("whether:"+y);
    }
    
    
}
