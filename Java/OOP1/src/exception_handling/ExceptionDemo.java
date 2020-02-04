package exception_handling;

public class ExceptionDemo {

    public static void main(String[] args) {

        try {
            for (int j = 0; j < 3; j++) {

                int x = 12;
                int y = 10;
                int result = x/ y;
                System.out.println(result);

                try {
                    String name = "Murad";
                    int i = 5;
                    System.out.println(name.charAt(i));
                } catch (ArithmeticException e) {
                    System.out.println("Exception: "+e);
                }
                
                finally {
            System.out.println("Nested Finally block always displayed");
        }
        System.out.println("Nested Last line of the Program");

            }
        } catch (StringIndexOutOfBoundsException e) {
            System.out.println("Exception: " + e);
        } catch (Exception e) {
            System.out.println("Exception1: " + e);
        } finally {
            System.out.println("Finally block always displayed");
        }
        System.out.println("Last line of the Program");

    }
}
