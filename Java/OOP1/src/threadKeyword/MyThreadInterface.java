package threadKeyword;

public class MyThreadInterface implements Runnable {
    
    
    
    @Override
    public void run() {
        try {
            Thread.sleep(5000);
             System.out.println("Thread Interface Object: "+Thread.currentThread().getId());
        } catch (Exception e) {

        }

    }
}
