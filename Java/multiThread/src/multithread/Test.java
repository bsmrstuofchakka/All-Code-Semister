package multithread;

public class Test {

    public static void main(String[] args) throws InterruptedException {

        A t1 = new A();

        Thread t2 = new Thread(t1, "myThread-1");
 
        t2.start();

        System.out.println("Inside the Main Method = " + Thread.currentThread().getName());

    }
}
