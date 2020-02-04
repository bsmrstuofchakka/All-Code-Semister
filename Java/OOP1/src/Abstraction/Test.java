package Abstraction;

public class Test {

    public static void main(String[] args) {
        MobileUser ms;
        
        ms = new Rahim();
        ms.sendMessage();
        ms.call();
        ms = new Karim();
        ms.sendMessage();
        ms.call();
    }
}
