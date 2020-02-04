
package multithread2;


public class Test {
    public static void main(String[] args){
        for(int i=1;i<=10;i++){
            Thread obj = new Thread(new ThreadDemointerface());
            obj.start();
        }
    }
}
