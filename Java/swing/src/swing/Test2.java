
package swing;

import javax.swing.JOptionPane;


public class Test2 {
    public static void main(String[] args) {
        String f_name = JOptionPane.showInputDialog(null,"Enter your Name: ","This is a title",JOptionPane.QUESTION_MESSAGE);
        String l_name = JOptionPane.showInputDialog(null,"Enter your Lastname","This is a Title", JOptionPane.QUESTION_MESSAGE);
        
        String name = f_name+" "+l_name;
        JOptionPane.showMessageDialog(null,"Love "+ name);
        
    }
}
