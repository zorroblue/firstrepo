import java.awt.event.*;
import javax.swing.*;
public class javaButton
{
  public static void main(String[] args) {
 	JFrame frame=new JFrame();
 	JButton button=new JButton("click");
 	frame.getContentPane().add(button);
 	button.addActionListener(new ActionListener()
 	{
 		public void actionPerformed(ActionEvent ev)
 		{
 			System.exit(0);
 		}
 	});
 	frame.setSize(300,300);
 	frame.setVisible(true);
 }
}
