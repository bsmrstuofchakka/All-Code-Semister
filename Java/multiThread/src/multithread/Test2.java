
package multithread;

import java.util.logging.Level;
import java.util.logging.Logger;


public class Test2 {
    public static void main(String[] args){
        murad m1= new murad();
        m1.start();
        try {
            m1.join();
        } catch (InterruptedException ex) {
            Logger.getLogger(Test2.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        
        System.out.println(m1.x);
    }
}
