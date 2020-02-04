
package swing;

import javax.swing.JOptionPane;


public class Test3 {
    public static void main(String[] args) {
        int choice=JOptionPane.showConfirmDialog(null,"Do you want to quit?", "This is the stayed or not Option in here.",JOptionPane.YES_NO_OPTION);
        
        if(choice==JOptionPane.YES_OPTION){
            System.exit(0);
        }else{
            System.out.println("You have no selected");
        }
    }
}
