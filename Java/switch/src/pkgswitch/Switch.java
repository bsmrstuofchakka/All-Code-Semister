package pkgswitch;

import java.util.Scanner;

public class Switch {
    
    static Scanner hp = new Scanner(System.in);
    
    public static void main(String[] agrs) {
        int a;
        System.out.print("Enter the Value of a: ");
        
        a = hp.nextInt();
        
        switch (a / 10) {
            
            case 10: 
                
            case 9: {
                System.out.print("A+ Grade" + "\n");
                break;
            }
            
            case 8: {
                System.out.print("A+ Grade" + "\n");
                break;
            }
            case 7: {
                System.out.print("A Grade" + "\n");
                break;
            }
            case 6: {
                System.out.print("A- Grade" + "\n");
                break;
            }
            case 5: {
                System.out.print("B Grade" + "\n");
                break;
            }
            case 4: {
                System.out.print("C Grade" + "\n");
                break;
            }
            case 3: {
                System.out.print("D Grade" + "\n");
                break;
            }
            
            default: {
                System.out.print("F Grade" + "\n");
                break;
            }
            
        }
        
    }
}
