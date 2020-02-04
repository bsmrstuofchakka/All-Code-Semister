
package multithread;

import java.util.logging.Level;
import java.util.logging.Logger;


class B extends Thread {
    
    @Override
    public void run(){
         for(int i=0;i<10;i++){
            System.out.println(2);
             try {
                 Thread.sleep(500);
             } catch (InterruptedException ex) {
                 Logger.getLogger(B.class.getName()).log(Level.SEVERE, null, ex);
             }
        }
        
    }
    
   public void print(){
      
   }
}
