package controlador;

import visual.Frame;
import visual.Home;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;

import visual.PaneljogoVelha;

public class ControladorHome implements ActionListener {
	Frame frame;
	Home home;
	PaneljogoVelha paneljogovelha;
	ControladorjogoVelha controladorjogovelha;  
	
	 public ControladorHome(Home home, Frame frame) {
	        this.frame = frame;
	        this.home = home;
	        addEventos();
	    }
	
	
	private void addEventos() {
		// TODO Auto-generated method stub
		home.getBtnJogar().addActionListener(this);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		if(e.getSource() == home.getBtnJogar()) {
			paneljogovelha = new PaneljogoVelha();
			controladorjogovelha = new ControladorjogoVelha(paneljogovelha);
			frame.setContentPane(paneljogovelha);
			frame.revalidate();
			frame.repaint();
		}	
	}
}
