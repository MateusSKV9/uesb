package Controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.SwingUtilities;
import visual.Frame;
import visual.Home;

public class ControladorFrame implements ActionListener {
	Frame frame;
	Home home;
	ControladorHome controladorHome;
	
	public ControladorFrame() {
		frame = new Frame();
		home = new Home();
		controladorHome = new ControladorHome(home, frame);		
		frame.setContentPane(home);
		
		frame.revalidate();
		frame.repaint();
	}
	
	@Override
	public void actionPerformed(ActionEvent e) {}
	
   public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            new ControladorFrame();
        });
    }
}