package controladores;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import visual.Frame;
import visual.PanelCadastrarAluno;
import visual.PanelCadastrarProfessor;

public class ControladorFrame implements ActionListener {
	Frame frame;
	PanelCadastrarAluno panelCadastrarAluno;
	ControladorCadastrarAluno controladorCadastrarAluno;
	PanelCadastrarProfessor panelCadastrarProfessor;
	ControladorCadastrarProfessor controladorCadastrarProfessor;

	public static void main(String[] args) {
		new ControladorFrame();
	}
	
	public ControladorFrame() {
		super();
		frame = new Frame();
		addEventos();
		frame.revalidate();
		frame.repaint();
	}

	public void addEventos() {
		frame.getMenuCadastrarAluno().addActionListener(this);
		frame.getMenuCadastrarProfessor().addActionListener(this);
	}
	
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == frame.getMenuCadastrarAluno()) {
			panelCadastrarAluno = new PanelCadastrarAluno();
			controladorCadastrarAluno = new ControladorCadastrarAluno(panelCadastrarAluno);
			frame.setContentPane(panelCadastrarAluno);
			frame.revalidate();
			frame.repaint();
		} else if(e.getSource() == frame.getMenuCadastrarProfessor()) {
			panelCadastrarProfessor = new PanelCadastrarProfessor();
			controladorCadastrarProfessor = new ControladorCadastrarProfessor(panelCadastrarProfessor);
			frame.setContentPane(panelCadastrarProfessor);
			frame.revalidate();
			frame.repaint();
		}
	}
}