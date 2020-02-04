package phonebook.memory;

/**
 *
 * @Md Murad Hossain
 */
import java.util.Scanner;

public class PhonebookMemory {

    static Scanner hp = new Scanner(System.in);

    public static void main(String[] args) {

        System.out.println();
        displayMenu();

    }

    public static void displayMenu() {

        int choice,i=0;
        while (i!=1) {

            System.out.println("what you to like to do? (1 2 3 )");
            System.out.println("1.call contact");
            System.out.println("2.save contact");
            System.out.println("3.Find Number");
            System.out.println("4.Do you want to exist? ");

            choice = hp.nextInt();
            if (choice == 4) {
                return;
            }

            switch (choice) {
                case 1: {
                    System.out.println(" Who would you like to call? (Firstname lastname)");
                    break;
                }
                case 2: {
                    System.out.println("What is name of person do you want to save (Firtstname lastname)");
                    System.out.print("What is the phone number of person you are saving?(1951631051)");
                    break;
                }
                case 3: {
                    System.out.println("what is the name of person whose number you are searching(Firstname Lastname)");
                    break;
                }
                
                default: {
                    System.out.println("Wrong key!!!! Please,select the correct key");
                    break;
                }
            }
            
            System.out.print("\n\n");

        }
    }
}
