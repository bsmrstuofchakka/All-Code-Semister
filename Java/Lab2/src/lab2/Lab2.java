package lab2;

class Theif extends Thread {

    public static int sweet;

    Theif(int sweet) {
        this.sweet = sweet;
    }

    int x = 0;

    public void get() {
        if (sweet < 60) {
            System.out.println("wait");
        } else {
            sweet = sweet - 5;
        }
        System.out.println(+sweet);
    }

    public void run() {
        while (true) {
            try {

                sleep(5);

            } catch (Exception e) {
                System.out.println(e);
            }

        }
    }
}

public class Lab2 extends Thread {

    public static int sweet = 0;

    public void set() {
        sweet = sweet + 10;
        if (sweet > 100) {
            Thread.currentThread().stop();
        }
        System.out.println(+sweet);
    }

    public void run() {
        while (true) {
            try {
                sleep(5);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
    public static void main(String[] args) {
        Lab2 t1 = new Lab2();
        t1.start();
        while (true) {
            t1.set();
            Theif t2 = new Theif(sweet);
            t2.start();
            t2.get();
        }
    }
}
