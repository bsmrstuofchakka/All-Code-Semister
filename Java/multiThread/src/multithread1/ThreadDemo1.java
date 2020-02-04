
package multithread1;


public class ThreadDemo1 extends Thread{
    
    public int id;
    public ThreadDemo1(int id){
        this.id=id;
    }

   
    
    
    @Override
    public void run(){
        try{
            System.out.println("Thread class Object " +id);
        }catch(Exception e){
            
        }
    }
}
