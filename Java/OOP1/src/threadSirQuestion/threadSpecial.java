package threadSirQuestion;

public class threadSpecial extends Thread {

    public static int counter = 0;

    @Override
    public void run() {
        while (true) {
            try {
                counter++;

                sleep(5);
                System.out.println(+counter);
                if (counter >= 1000) {
                    System.out.println(Thread.currentThread().getName() + " is stop");
                    Thread.currentThread().stop();
                }
            } catch (InterruptedException e) {
                System.out.println(e);
            }

        }
    }
}
