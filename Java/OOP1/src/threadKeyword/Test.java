
package threadKeyword;


public class Test {
    public static void main(String[] args) {
        
        for(int i=1;i<=10;i++){
            MyThread obj = new MyThread(i);
            obj.start();
            
            Thread obj2 = new Thread(new MyThreadInterface());
            obj2.start();
        }
    }
}
