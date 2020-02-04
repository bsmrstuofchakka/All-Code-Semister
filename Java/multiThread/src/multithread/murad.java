
package multithread;

public class murad extends Thread{
    int x;
    @Override
    public void run(){
        for(int i=0;i<10000223;i++){
            x++;
        }
    }
}
