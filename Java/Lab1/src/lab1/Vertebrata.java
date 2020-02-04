
package lab1;
public class Vertebrata {
    int n;
    String s;
   public Vertebrata(int n,String s){
           this.n=n;
           this.s=s;
       }
    public void numbr_of_bones(){
        System.out.println("Number of bones:"+n);
    }
    public void respiratory_system(){
        System.out.println("Repotary:"+s);
        
    }

    void color() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    void Whetherr_sing() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
}
