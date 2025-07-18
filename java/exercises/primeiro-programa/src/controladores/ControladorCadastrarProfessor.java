package controladores;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import visual.PanelCadastrarProfessor;

public class ControladorCadastrarProfessor implements ActionListener {
	PanelCadastrarProfessor panelCadastrarProfessor;

	public ControladorCadastrarProfessor(PanelCadastrarProfessor panelCadastrarProfessor) {
		this.panelCadastrarProfessor = panelCadastrarProfessor;
		addEventos();
	}

	private void addEventos() {
		panelCadastrarProfessor.getBotaoCadastrar().addActionListener(this);
	}
	
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == panelCadastrarProfessor.getBotaoCadastrar()) {
			System.out.println("Clicou!");
		}	
	}
}
