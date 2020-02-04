
package multithread;

import java.util.logging.Level;
import java.util.logging.Logger;


public class A extends C implements Runnable{
    @Override
    public void run(){
        System.out.println("Inside the run Method = "+Thread.currentThread().getName());
        for(int i=0;i<10;i++){
             System.out.println(1);
            try {
                Thread.sleep(500);
            } catch (InterruptedException ex) {
                Logger.getLogger(A.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}
