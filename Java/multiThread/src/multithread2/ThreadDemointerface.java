
package multithread2;


public class ThreadDemointerface implements Runnable{

     @Override
    public void run(){
        try{
            System.out.println("Thread Interface Object " +Thread.currentThread().getId());
        }catch(Exception e){
            
        }
    }
    
    
    
}
