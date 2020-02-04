
package threadKeyword;


public class MyThread extends Thread{
    
    public int id;
    
    MyThread(int id){
        this.id=id;
    }
    
    @Override
    public void run(){
        try{
            sleep(10000);
            System.out.println("Thread Class Object: "+id);
            
        }catch(Exception e){
            
        }
    }
    
    
}
