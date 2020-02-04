
package swing2;


import javax.swing.JFrame;


public class FrameDemo {
    public static void main(String[] args){
        JFrame frame = new JFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        //frame.setSize(600,500);
        //frame.setLocation(200, 50);
        
        frame.setBounds(200, 50, 600, 500);
        
        //frame.setLocationRelativeTo(null);
    }
    
}
