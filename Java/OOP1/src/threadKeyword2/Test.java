
package threadKeyword2;


public class Test {
    public static void main(String[] args){
        cubbyHole c=new cubbyHole();
        Producer p1 = new Producer(c,1);
        Consumer c1= new Consumer(c,1);
        p1.start();
        c1.start();
        
        
    }
}
