
package multithread;

import java.util.logging.Level;
import java.util.logging.Logger;


public class myThread extends Thread {
    
    @Override
    public void run(){
        for(int i=0;i<10;i++){
            System.out.println(1);
            try {
                Thread.sleep(10000);
            } catch (InterruptedException ex) {
                Logger.getLogger(myThread.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}
