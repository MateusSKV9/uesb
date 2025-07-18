package visual;
import javax.swing.JFrame;
import primeiroPrograma.AlunoUESB;
import primeiroPrograma.ProfessorUESB;
import javax.swing.JPanel;
import java.awt.BorderLayout;
import javax.swing.JTextField;

import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.JMenuBar;
import javax.swing.JMenu;
import javax.swing.JMenuItem;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class Frame extends JFrame {
	private JMenuBar menuBar;
	private JMenu menuCadastrar;
	private JMenuItem menuItemCadastrarProfessor;
	private JMenuItem menuItemCadastrarAluno;
	
	public Frame() {
		super();
		this.setVisible(true);
		this.setSize(875, 780);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		setJMenuBar(getMenuBar_1());
	}
	
	private JMenuBar getMenuBar_1() {
		if (menuBar == null) {
			menuBar = new JMenuBar();
			menuBar.add(getMenuCadastrar());
		}
		return menuBar;
	}
	
	private JMenu getMenuCadastrar() {
		if (menuCadastrar == null) {
			menuCadastrar = new JMenu("Cadastrar");
			menuCadastrar.add(getMenuCadastrarAluno());
			menuCadastrar.add(getMenuCadastrarProfessor());
		}
		return menuCadastrar;
	}
	
	public JMenuItem getMenuCadastrarProfessor() {
		if (menuItemCadastrarProfessor == null) {
			menuItemCadastrarProfessor = new JMenuItem("Cadastrar professor");
		}
		return menuItemCadastrarProfessor;
	}
	public JMenuItem getMenuCadastrarAluno() {
		if (menuItemCadastrarAluno == null) {
			menuItemCadastrarAluno = new JMenuItem("Cadastrar aluno");
		}
		return menuItemCadastrarAluno;
	}
}
