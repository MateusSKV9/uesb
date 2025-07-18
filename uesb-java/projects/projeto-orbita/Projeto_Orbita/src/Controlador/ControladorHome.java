package Controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import visual.Espaco;
import visual.Frame;
import visual.Home;

public class ControladorHome implements ActionListener {
	Frame frame;
	Home home;
	Espaco espaco;
	ControladorOrbita controladorOrbita;

	 public ControladorHome(Home home, Frame frame) {
	        this.frame = frame;
	        this.home = home;
	        addEventos();
	    }
	
	private void addEventos() {
		home.getBtnOrbitar().addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == home.getBtnOrbitar()) {
			espaco = new Espaco();
			controladorOrbita= new ControladorOrbita(espaco);
			frame.setContentPane(espaco);
			frame.revalidate();
			frame.repaint();
		}	
	}

}
