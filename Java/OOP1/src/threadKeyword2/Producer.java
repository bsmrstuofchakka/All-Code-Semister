
package threadKeyword2;


public class Producer extends Thread{
    private cubbyHole cubbyhole;
    private int number;
    
    public Producer(cubbyHole c,int number){
        cubbyhole=c;
        this.number=number;
    }
    @Override
    public void run(){
        for(int i=0;i<10;i++){
            cubbyhole.put(i);
            System.out.println("Producer #"+ this.number +"put: "+i);
            
            try{
                sleep((int)(Math.random()*100));
            }catch(InterruptedException e){
                System.out.println(e);
            }
        }
    }
    
}
