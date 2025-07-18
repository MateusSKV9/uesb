package controladores;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JOptionPane;

import visual.PanelCadastrarAluno;

public class ControladorCadastrarAluno implements ActionListener {
	
	PanelCadastrarAluno panelCadastrarAluno;

	public ControladorCadastrarAluno(PanelCadastrarAluno panelCadastrarAluno) {
		this.panelCadastrarAluno = panelCadastrarAluno;
		addEventos();
	}

	private void addEventos() {
		panelCadastrarAluno.getBotaoCadastrar().addActionListener(this);
	}
	
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == panelCadastrarAluno.getBotaoCadastrar()) {
			System.out.println("Clicou!");
		}
		
	}
}