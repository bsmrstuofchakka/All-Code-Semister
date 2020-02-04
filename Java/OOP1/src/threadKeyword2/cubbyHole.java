
package threadKeyword2;


public class cubbyHole {
    private int contents;
    private boolean available = false;
    
    public synchronized int get(){
        
        while(available==false){
            try{
                wait();
            }catch(InterruptedException e){
                System.out.println(e);
            }
        }
        available=false;
        notifyAll();
        return contents;
    }
    
    public synchronized void put(int value){
        while(available==true){
            try{
                wait();
            }catch(InterruptedException e){
                System.out.println(e);
            }
        }
          contents=value;
          available=true;
          notifyAll();     
    }
}
