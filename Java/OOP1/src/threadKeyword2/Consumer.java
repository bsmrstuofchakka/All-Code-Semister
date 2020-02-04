
package threadKeyword2;


public class Consumer extends Thread{
    private cubbyHole cubbyhole;
    private int number;
    
    public Consumer(cubbyHole c,int number){
        cubbyhole=c;
        this.number=number;
    }
    @Override
    public void run(){
        int value=0;
        for(int i=0;i<10;i++){
            value=cubbyhole.get();
            System.out.println("Consumer #"+this.number + "got: "+value);
        }
    }
    
}
